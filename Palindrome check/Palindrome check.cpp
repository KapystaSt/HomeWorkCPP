#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "Введіть слово для перевірки: ";
    cin >> input;

    int left = 0;                 
    int right = input.length() - 1; 

    while (left < right) 
    {
        if (input[left] != input[right]) 
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
