#pragma once
#include <cmath>

// Базовий клас "Фігура"
class Figure {
public:
    // Віртуальні методи для обчислення площі та довжини
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual ~Figure() = default; // Віртуальний деструктор
};

// Похідний клас "Еліпс"
class Ellipse : public Figure {
protected:
    double semiMajorAxis; // Піввелика вісь
    double semiMinorAxis; // Півмала вісь

public:
    // Конструктор з параметрами
    Ellipse(double a, double b);

    // Перевизначення віртуальних методів
    double getArea() const override;
    double getPerimeter() const override;
};

// Похідний клас "Коло"
class Circle : public Ellipse {
public:
    // Конструктор з параметром
    Circle(double radius);

    // Перевизначення віртуальних методів
    double getArea() const override;
    double getPerimeter() const override;
};
