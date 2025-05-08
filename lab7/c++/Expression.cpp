#include "Expression.h"
#include <cmath>        // Для sqrt()
#include <stdexcept>    // Для винятків

// Конструктор
Expression::Expression(double a, double c, double d)
    : a(a), c(c), d(d) {}

// Метод установки нових значень
void Expression::setValues(double a, double c, double d) {
    this->a = a;
    this->c = c;
    this->d = d;
}

// Метод для обчислення виразу sqrt(42 / d) з перевіркою
double Expression::calculateSqrtTerm(double d) const {
    if (d == 0) {
        throw std::invalid_argument("Помилка: ділення на нуль у корені!");
    }
    double value = 42.0 / d;
    if (value < 0) {
        throw std::invalid_argument("Помилка: корінь з від’ємного числа!");
    }
    return std::sqrt(value);
}

// Метод обчислення повного виразу
double Expression::calculate() const {
    double numerator = 2 * c - d * calculateSqrtTerm(d);
    double denominator = c + a - 1;

    if (denominator == 0) {
        throw std::invalid_argument("Помилка: ділення на нуль у знаменнику!");
    }

    return numerator / denominator;
}
