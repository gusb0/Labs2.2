using System;

class Program
{
    static void Main()
    {
        var text = new TextContainer();

        // Додаємо рядки
        text.AddLine(new TextLine("Привіт 123"));
        text.AddLine(new TextLine("Тестовий рядок 4567"));
        text.AddLine(new TextLine("Без цифр"));

        // Виводимо статистику
        Console.WriteLine($"Загальна кількість символів: {text.GetTotalCharacterCount()}");
        Console.WriteLine($"Відсоток цифр у тексті: {text.GetDigitPercentage():F2}%");
        Console.WriteLine($"Найдовший рядок: {text.GetLongestLine().GetContent()}");

        // Видаляємо другий рядок
        text.RemoveLine(1);
        Console.WriteLine($"Після видалення: Відсоток цифр: {text.GetDigitPercentage():F2}%");

        // Очищаємо текст
        text.Clear();
        Console.WriteLine($"Після очищення: символів {text.GetTotalCharacterCount()}");
    }
}
