#include <iostream>
#include "Expression.h"

int main() {
    const int SIZE = 3;
    Expression expressions[SIZE] = {
        Expression(2, 3, 1),
        Expression(1, 2, -1),  // Корінь з від’ємного -> викличе виняток
        Expression(1, 0, 1)    // Знаменник буде нуль -> викличе виняток
    };

    for (int i = 0; i < SIZE; ++i) {
        try {
            double result = expressions[i].calculate();
            std::cout << "Результат [" << i << "]: " << result << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Помилка при обчисленні [" << i << "]: " << e.what() << std::endl;
        }
    }

    return 0;
}
