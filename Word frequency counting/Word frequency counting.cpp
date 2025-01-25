// Word frequency counting
//
#include <iostream>
#include <map>
#include <sstream>

using namespace std;
int main() 
{
    map<string, int> word_count;
    string text;

    cout << "Введіть текст: ";
    getline(cin, text);

    istringstream stream(text);
    string word;

    while (stream >> word) 
    {
        word_count[word]++;
    }

    cout << "Кількість входжень кожного слова:\n";
    for (const auto& pair : word_count) 
    {
        cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}


