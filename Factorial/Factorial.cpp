
#include <iostream>

int main()
{
    int n;
    long long factorial = 1;

    std::cout << "Введіть число: ";
    std:: cin >> n;

    
    for (int i = 1; i <= n; i++) 
    {
        factorial *= i;
    }

    std::cout << "Факторіал  " << n << " = " << factorial;

    return 0;
}

