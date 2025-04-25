#pragma once
#include <cmath> // для використання sqrt() і M_PI

// Базовий клас "Фігури"
class Figure {
public:
    // Віртуальна функція для обчислення площі
    virtual double area() const = 0;

    // Віртуальна функція для обчислення довжини (периметра)
    virtual double length() const = 0;

    // Віртуальний деструктор для правильного видалення об'єктів
    virtual ~Figure() = default;
};

// Похідний клас "Еліпси"
class Ellipse : public Figure {
private:
    double a; // півдовжина великої осі
    double b; // півдовжина малої осі

public:
    // Конструктор з параметрами
    Ellipse(double semiMajor, double semiMinor);

    // Перевизначення обчислення площі
    double area() const override;

    // Перевизначення обчислення довжини
    double length() const override;

    // Геттери для читання значень півосей
    double getA() const;
    double getB() const;
};

// Похідний клас "Коло"
class Circle : public Ellipse {
public:
    // Конструктор з параметром — радіусом
    Circle(double radius);
};
