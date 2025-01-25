// Finding unique numbers (version 2)
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> unique_numbers;
    int n;

    cout << "Скільки чисел ви хочете ввести?:";
    cin >> n;

    cout << "Введіть " << n << " чисел:\n";
    for (int i = 0; i < n; ++i) 
    {
        int num;
        cin >> num;

        
        bool found = false;
        for (int unique : unique_numbers) 
        {
            if (unique == num) 
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            unique_numbers.push_back(num); 
        }
    }

    
    cout << "Унікальні числа:\n";
    for (int num : unique_numbers) 

    {
        std::cout << num << " \n";
    }
    

    return 0;
}
