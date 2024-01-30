#include <iostream>
#include <string>
#include <locale> // Для поддержки русских символов
using namespace std;

int main() {
    string word;
    cout << "Enter a word2: ";
    cin >> word;

    char firstLetter = tolower(word[0], locale()); // Преобразуем первую букву в нижний регистр с учетом локали
    string result;

    for (char letter : word) {
        if (tolower(letter, locale()) != firstLetter) { // Преобразуем каждую букву в нижний регистр с учетом локали
            result += letter;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
