using System;
using System.Linq;

// Клас представляє один текстовий рядок
public class TextLine : INumericAnalysis
{
    private readonly string content; // Зміст рядка

    public TextLine(string text)
    {
        content = text;
    }

    public string GetContent() => content; // Повертає зміст рядка

    public int GetLength() => content.Length; // Довжина рядка

    public int GetDigitCount() => content.Count(char.IsDigit); // Кількість цифр у рядку

    public double GetDigitPercentage() => content.Length == 0 ? 0.0 : (double)GetDigitCount() / content.Length * 100; // % цифр
}