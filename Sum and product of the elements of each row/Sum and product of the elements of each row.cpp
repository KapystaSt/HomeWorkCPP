#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int rows, cols;

    cout << "\n";
    cout << "Введіть кількість рядків : ";
    cin >> rows ;
    cout << "\n";
    cout << "Введіть кількість  стовпців: ";
    cin >> cols;
    cout << "\n";
    vector<vector<int>> matrix(rows, vector<int>(cols));

    
    cout << "Введіть елементи:\n" ;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> matrix[i][j];
        }
    }

    
    vector<int> rowSums(rows, 0);
    vector<int> rowProducts(rows, 1);

    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j) 
        {
            rowSums[i] += matrix[i][j];        
            rowProducts[i] *= matrix[i][j];   
        }
    }

    cout << "\n";
    cout << "Суми рядків: ";
    for (int sum : rowSums) 
    {
        cout << sum << " ";
    }
    cout << "\n";

    cout << "\n";
    cout << "Добутки рядків: ";
    for (int product : rowProducts) {
        cout << product << " ";
    }
    cout << "\n";

    return 0;
}

