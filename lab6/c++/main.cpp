#include <iostream>
#include "TextContainer.h"

int main() {
    TextContainer text;
    // Додаємо рядки
    text.AddLine(TextLine("Привіт 123"));
    text.AddLine(TextLine("Тестовий рядок 4567"));
    text.AddLine(TextLine("Без цифр"));

    // Виводимо статистику
    std::cout << "Загальна кількість символів: " << text.GetTotalCharacterCount() << "\n";
    std::cout << "Відсоток цифр у тексті: " << text.GetDigitPercentage() << "%\n";
    std::cout << "Найдовший рядок: " << text.GetLongestLine().GetContent() << "\n";

    // Видаляємо другий рядок
    text.RemoveLine(1);
    std::cout << "Після видалення другого рядка, новий відсоток цифр: " << text.GetDigitPercentage() << "%\n";

    // Очищаємо текст
    text.Clear();
    std::cout << "Після очищення тексту, символів: " << text.GetTotalCharacterCount() << "\n";

    return 0;
}