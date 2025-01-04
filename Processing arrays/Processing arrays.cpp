#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (cin.fail() || n <= 0) 
    {
        cout << "Error: Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
        if (cin.fail()) 
        {
            cout << "Error: Invalid input. Please enter integers only." << endl;
            delete[] arr;
            return 1;
        }
    }

    int sum = 0, maxElement = arr[0];

    cout << "---------------\n     Result       \n--------------- \n";

    for (int i = 0; i < n; ++i) 
    {
        sum += arr[i];
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }
    cout << "Sum: " << sum << "\n";
    cout << "Maximum element: " << maxElement << "\n";

    cout << "Array in reverse order: ";
    for (int i = n - 1; i >= 0; --i) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Unique elements: ";
    for (int i = 0; i < n; ++i) 
    {
        bool isUnique = true;
        for (int j = 0; j < n; ++j) 
        {
            if (arr[i] == arr[j] && i != j) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) 
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";

    delete[] arr;
    return 0;
}

