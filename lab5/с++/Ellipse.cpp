#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse(double a, double b) : a(a), b(b) {}

double Ellipse::getArea() const {
    return M_PI * a * b;  // площа еліпса
}

double Ellipse::getPerimeter() const {
    return M_PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b))); // довжина еліпса (наближено)
}