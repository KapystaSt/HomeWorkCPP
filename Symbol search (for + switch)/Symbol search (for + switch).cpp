#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str; 
    char searchChar; 
   
    cout << "Введіть рядок: ";
    getline(cin, str); 
    
    cout << "Введіть символ для пошуку: ";
    cin >> searchChar;

    int positions[100]; 
    int count = 0; 

    
    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] == searchChar) 
        { 
            positions[count] = i; 
            count++; 
        }
    }

    switch (count) 
    {
        case 0: 
        cout << "Символ '" << searchChar << "' не знайдено в рядку." << endl;
        break;

        default: 
        cout << "Символ '" << searchChar << "' знайдено на позиціях: ";

        for (int i = 0; i < count; i++) {
            cout << positions[i] << " ";
        }
        cout << endl;
        break;
    }

    return 0;
}




