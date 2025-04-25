#include <iostream>
#include <vector>
#include "Figure.h"
#include "Ellipse.h"
#include "Circle.h"

// Функція демонструє поліморфізм
void printFigureInfo(const Figure& fig) {
    std::cout << "Area: " << fig.getArea() << std::endl;
    std::cout << "Perimeter: " << fig.getPerimeter() << std::endl;
}

int main() {
    Ellipse ellipse(5.0, 3.0);  // створення еліпса
    Circle circle(4.0);         // створення кола

    std::vector<Figure*> figures = { &ellipse, &circle };

    for (Figure* fig : figures) {
        printFigureInfo(*fig); // демонстрація віртуального виклику через базовий клас
        std::cout << "---\n";
    }

    return 0;
}
