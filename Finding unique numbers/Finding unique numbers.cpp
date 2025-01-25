// Finding unique numbers (std::set practice).
#include <iostream>
#include <set>

using namespace std;

int main() 
{
    set<int> unique_numbers; 
    int n;

    cout << "Скільки чисел ви хочете ввести? : ";
    cin >> n;

    cout << "Введіть " << n << " чисел:\n";
    for (int i = 0; i < n; ++i) 
    {
        int num;
        cin >> num;
        unique_numbers.insert(num); 
    }

    cout << "Унікальні числа:\n";
    for (int num : unique_numbers) 
    { 
        cout << num << " \n";
    }
    cout << endl;

    return 0;
}
