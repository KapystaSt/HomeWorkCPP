// Unique elements


#include <iostream>
#include <vector>

using namespace std;

vector<int> remove_duplicates(const std::vector<int>& input) 
{
    vector<int> unique_values;

    for (int num : input)
    {

        bool found = false;
        for (int unique : unique_values)

            if (unique == num)
            {
                found = true;
                break;
            }

        if (!found)
        {
            unique_values.push_back(num);
        }
    }

    return unique_values;
}

int main() {
    vector<int> numbers = { 1, 2, 3, 2, 4, 1, 5, 3 };

    vector<int> result = remove_duplicates(numbers);

    cout << "Вектор без дублікатів: ";
    for (int num : result) 
    {
        cout << num << " ";
    }
    

    return 0;
}
