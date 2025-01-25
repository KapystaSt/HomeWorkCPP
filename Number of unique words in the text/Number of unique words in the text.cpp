// Number of unique words in the text
#include <iostream>
#include <set>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    set<string> unique_words;
    string text;

    cout << "Введіть текст: ";
    getline(cin, text);

    
    transform(text.begin(), text.end(), text.begin(), ::tolower);

    
    string word;
    for (char ch : text) {
        if (ch == ' ') {
            if (!word.empty()) unique_words.insert(word);
            word.clear();
        }
        else {
            word += ch;
        }
    }
    if (!word.empty()) unique_words.insert(word); // Останнє слово

    cout << "Кількість унікальних слів: " << unique_words.size();

    return 0;
}

