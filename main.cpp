#include <iostream>
#include "LetterString.h"

int main() {
    // Створення об'єкта похідного класу та ініціалізація рядком "hello"
    LetterString str("hello");
    
    // Виведення початкового значення рядка
    std::cout << "Original string: " << str.GetValue() << std::endl;
    
    // Виконання сортування рядка
    str.SortString();
    
    // Виведення відсортованого рядка
    std::cout << "Sorted string: " << str.GetValue() << std::endl;
    
    // Виведення довжини рядка
    std::cout << "String length: " << str.GetLength() << std::endl;
    
    return 0;
}
