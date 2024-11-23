
#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    double result = 0;
    char action;

    cout << "Введіть перше число: ";
    cin >> number1;

    cout << "Введіть дію (+, -, *, /): ";
    cin >> action;

    cout << "Введіть друге число: ";
    cin >> number2;

    switch (action)
    {
    case '+':
        result = number1 + number2;
        break;

    case '-':
        result = number1 - number2;
        break;

    case '*':
        result = number1 * number2;
        break;

    case '/':
        if (number2 == 0)
        {
            cout << "На нуль ділити не можна! \n";
            return 1; 
        }

        result = number1 / number2; 
        break;

    default:
        cout << "Ви ввели неправильну дію!\n" ;
        return 1; 
    }

    cout << number1 << " "  << action <<" " << number2 << " " <<"="<< " " << result;

    return 0; 
}
