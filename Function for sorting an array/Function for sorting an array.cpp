#include <iostream>
#include <vector> 

using namespace std;

int main() {
    
    int n; 
    cout << "Введіть кількість чисел для масива: ";
    cin >> n;

    vector<int> digitals(n); 

   
    cout << "Введіть числа для заповнення масива: " << endl;
 
    for (int i = 0; i < n; i++) {
        cin >> digitals[i];
    }

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (digitals[j] > digitals[j + 1]) {
                
                int temp = digitals[j];
                digitals[j] = digitals[j + 1];
                digitals[j + 1] = temp;
            }
        }
    }

   
    cout << "Масив у відсортованому вигляді: ";
    for (int i = 0; i < n; i++) {
        cout << digitals[i] << " ";
    }

    return 0;
}
