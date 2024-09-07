#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;

    int n = input.length();
    if (n == 0) {
        cout << "No" << endl;
        return 0;
    }

    int i = 0;
    bool hasDigit = false;
    bool hasDot = false;

    // Проверка первого символа
    if (input[i] == '-' || isdigit(input[i]) || input[i] == '.') {
        if (input[i] == '.') hasDot = true;
        i++;
    } else {
        cout << "No" << endl;
        return 0;
    }

    // Проверка остальных символов
    while (i < n) {
        if (isdigit(input[i])) {
            hasDigit = true;
        } else if (input[i] == '.') {
            if (hasDot) {
                cout << "No" << endl;
                return 0;
            }
            hasDot = true;
        } else {
            cout << "No" << endl;
            return 0;
        }
        i++;
    }

    if (hasDigit) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}