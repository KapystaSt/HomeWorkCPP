
#include <iostream>
#include "math_utils.h"

int main() 
{
    using namespace std;
    using namespace MathUtils;  
    namespace Adv = MathUtils::Advanced; 

    int x = 3, y = 4;
    double radius =  5.0;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Power: " << Adv::power(2, 3) << endl;
    cout << "Circle Area: " << Adv::circleArea(radius) << endl;

    return 0;
}
