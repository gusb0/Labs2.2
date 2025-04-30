#include "TextLine.h"
#include <cctype>

// Конструктор ініціалізує рядок
TextLine::TextLine(const std::string& text) : content(text) {}

// Повертає зміст
std::string TextLine::GetContent() const {
    return content;
}

// Довжина рядка
int TextLine::GetLength() const {
    return static_cast<int>(content.length());
}

// Кількість цифр у рядку
int TextLine::GetDigitCount() const {
    int count = 0;
    for (char ch : content) {
        if (std::isdigit(ch)) count++;
    }
    return count;
}

// Відсоток цифр у рядку
double TextLine::GetDigitPercentage() const {
    if (content.empty()) return 0.0;
    return (static_cast<double>(GetDigitCount()) / content.length()) * 100;
}
