#ifndef LETTERSTRING_H
#define LETTERSTRING_H

#include "StringBase.h"
#include <algorithm>

// Похідний клас, що успадковує StringBase та додає метод сортування
class LetterString : public StringBase {
public:
    // Конструктор без параметрів, викликає конструктор базового класу
    LetterString() : StringBase() {}
    
    // Конструктор з параметром, викликає відповідний конструктор базового класу
    LetterString(const std::string& val) : StringBase(val) {}
    
    // Метод для сортування символів рядка за зростанням
    void SortString() {
        std::sort(value.begin(), value.end());
    }
};

#endif // LETTERSTRING_H