#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string text;
    wcout << L"Введите текст: ";
    getline(std::cin, text);

    istringstream iss(text);
    string word;
    int word_count = 0;

    while (iss >> word) {
        word_count++;
    }

    wcout << L"Количество слов: " << word_count << endl;

    return 0;
}
