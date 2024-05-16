#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    string output;

    for (char c : input) {
        char lower_c = tolower(c);
        bool is_duplicate = false;

        for (char o : output) {
            if (lower_c == tolower(o)) {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate) {
            output += c;
        }
    }

    std::cout << "Строка без повторяющихся символов: " << output << std::endl;

    return 0;
}
