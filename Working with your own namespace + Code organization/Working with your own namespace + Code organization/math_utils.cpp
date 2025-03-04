
#include "math_utils.h"
#include <cmath>  


int MathUtils::add(int a, int b) 
{
    return a + b;
}

int MathUtils::subtract(int a, int b) 
{
    return a - b;
}

int MathUtils::multiply(int a, int b) 
{
    return a * b;
}


double MathUtils::average(int a, int b) 
{
    return (a + b) / 2.0;
}



double MathUtils::Advanced::power(double base, int exponent) 
{
    return std::pow(base, exponent);  
}

double MathUtils::Advanced::circleArea(double radius) 
{
    return MathUtils::PI * radius * radius;  
}
