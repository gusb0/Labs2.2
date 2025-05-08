#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <stdexcept>  // Для std::invalid_argument

class Expression {
private:
    double a;
    double c;
    double d;

    // Допоміжний метод для обчислення кореня з перевіркою
    double calculateSqrtTerm(double d) const;

public:
    // Конструктор
    Expression(double a, double c, double d);

    // Сетери (якщо потрібно змінити значення після створення об’єкта)
    void setValues(double a, double c, double d);

    // Метод для обчислення повного виразу
    double calculate() const;
};

#endif
