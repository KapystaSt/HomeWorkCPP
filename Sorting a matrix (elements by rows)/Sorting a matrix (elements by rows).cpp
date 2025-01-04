#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int rows, cols;

    
    cout << "Введіть кількість рядків : ";

    cin >> rows ;

    cout << "Введіть кількість  стовпців: ";

    cin >> cols;
    
    vector<vector<int>> matrix(rows, vector<int>(cols));

    
    cout << "\n Введіть елементи:\n " ;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < rows; ++i) 
    {
        sort(matrix[i].begin(), matrix[i].end());
    }

    
    cout << "\nМатриця після сортування рядків:\n" ;
    for (const auto& row : matrix) 
    {
        for (int elem : row) 
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
