#include "TextContainer.h"
#include <stdexcept>

// Додає рядок у контейнер
void TextContainer::AddLine(const TextLine& line) {
    lines.push_back(line);
}

// Видаляє рядок за індексом
void TextContainer::RemoveLine(int index) {
    if (index < 0 || index >= lines.size()) throw std::out_of_range("Invalid index");
    lines.erase(lines.begin() + index);
}

// Очищає всі рядки
void TextContainer::Clear() {
    lines.clear();
}

// Знаходить найдовший рядок
TextLine TextContainer::GetLongestLine() const {
    if (lines.empty()) throw std::runtime_error("No lines in container");
    const TextLine* longest = &lines[0];
    for (const auto& line : lines) {
        if (line.GetLength() > longest->GetLength()) longest = &line;
    }
    return *longest;
}

// Обчислює загальний % цифр у всіх рядках
double TextContainer::GetDigitPercentage() const {
    if (lines.empty()) return 0.0;
    int digitCount = 0, total = 0;
    for (const auto& line : lines) {
        digitCount += line.GetDigitCount();
        total += line.GetLength();
    }
    if (total == 0) return 0.0;
    return (static_cast<double>(digitCount) / total) * 100;
}

// Загальна кількість символів у всіх рядках
int TextContainer::GetTotalCharacterCount() const {
    int sum = 0;
    for (const auto& line : lines) sum += line.GetLength();
    return sum;
}