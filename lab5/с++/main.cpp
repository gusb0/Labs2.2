#include <iostream>
#include "Figure.h"

void showFigureData(const Figure& f) {
    std::cout << "Площа: " << f.getArea() << std::endl;
    std::cout << "Довжина: " << f.getPerimeter() << std::endl;
}

int main() {
    Ellipse ellipse(5, 3);
    Circle circle(4);

    std::cout << "Еліпс:\n";
    showFigureData(ellipse); // Поліморфізм через посилання на базовий клас

    std::cout << "\nКоло:\n";
    showFigureData(circle);  // Аналогічно

    return 0;
}
