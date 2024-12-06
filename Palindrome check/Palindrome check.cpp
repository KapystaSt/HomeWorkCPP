#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    cout << "Введіть слово для перевірки: ";
    cin >> str;

    int left = 0;                 
    int right = str.length() - 1; 

    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            cout << "Це не паліндром." << endl;
            return 0; 
        }

        left++;
        right--;
    }

    cout << "Це паліндром!" << endl;
    return 0;
}
