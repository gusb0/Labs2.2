#ifndef TEXT_LINE_H
#define TEXT_LINE_H

#include <string>
#include "INumericAnalysis.h"

// Клас представляє один текстовий рядок
class TextLine : public INumericAnalysis {
private:
    std::string content; // Зміст рядка

public:
    TextLine(const std::string& text);
    std::string GetContent() const;        // Повертає зміст рядка
    int GetLength() const;                // Довжина рядка
    int GetDigitCount() const;            // Кількість цифр у рядку
    double GetDigitPercentage() const override; // Реалізація інтерфейсу
};

#endif // TEXT_LINE_H