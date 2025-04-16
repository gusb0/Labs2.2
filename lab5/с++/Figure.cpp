#include "Figure.h"

Ellipse::Ellipse(double a, double b) : semiMajorAxis(a), semiMinorAxis(b) {}

double Ellipse::getArea() const {
    return M_PI * semiMajorAxis * semiMinorAxis; // Формула площі еліпса
}

double Ellipse::getPerimeter() const {
    // Наближена формула для довжини еліпса
    return M_PI * (3*(semiMajorAxis + semiMinorAxis) -
                   sqrt((3*semiMajorAxis + semiMinorAxis)*(semiMajorAxis + 3*semiMinorAxis)));
}

Circle::Circle(double radius) : Ellipse(radius, radius) {}

double Circle::getArea() const {
    return M_PI * semiMajorAxis * semiMajorAxis; // Формула площі круга
}

double Circle::getPerimeter() const {
    return 2 * M_PI * semiMajorAxis;             // Формула довжини круга
}
