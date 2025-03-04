#pragma once
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

namespace MathUtils {
    // Функції для базових математичних операцій
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);

    // Константа PI
    const double PI = 3.14159;

    // Вкладений простір імен Advanced
    namespace Advanced {
        double power(double base, int exponent);
        double circleArea(double radius);
    }
}

#endif // MATH_UTILS_H
