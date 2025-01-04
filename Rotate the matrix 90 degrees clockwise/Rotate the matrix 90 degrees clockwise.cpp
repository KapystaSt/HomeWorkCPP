#include <iostream>
#include <vector>

using namespace std;


void rotateMatrix(vector<vector<int>>& matrix, int n) {
   
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}

int main() {
    int n;
    
    cout << "Введіть розмір матриці:\n";
    cin >> n;
    
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Введіть елементи:\n" ;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix, n);
    
    cout << "\nМатриця після повороту:\n" ;
    for (const auto& row : matrix) 
    {
        for (int elem : row) 
        {
            cout << elem << " ";
        }
        cout << "\n";
    }

    return 0;
}
