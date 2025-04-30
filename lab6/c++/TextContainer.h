#ifndef TEXT_CONTAINER_H
#define TEXT_CONTAINER_H

#include <vector>
#include "TextLine.h"

// Клас представляє текст, що складається з кількох рядків
class TextContainer : public INumericAnalysis {
private:
    std::vector<TextLine> lines; // Список рядків

public:
    void AddLine(const TextLine& line); // Додає рядок
    void RemoveLine(int index);         // Видаляє рядок за індексом
    void Clear();                       // Очищає текст
    TextLine GetLongestLine() const;   // Повертає найдовший рядок
    double GetDigitPercentage() const override; // % цифр у тексті
    int GetTotalCharacterCount() const;         // Загальна кількість символів
};