using System;
using System.Collections.Generic;
using System.Linq;

// Клас представляє текст з кількох рядків
public class TextContainer : INumericAnalysis
{
    private readonly List<TextLine> lines = new List<TextLine>(); // Колекція рядків

    public void AddLine(TextLine line) => lines.Add(line); // Додає рядок

    public void RemoveLine(int index)
    {
        if (index < 0 || index >= lines.Count) throw new ArgumentOutOfRangeException("index");
        lines.RemoveAt(index);
    }

    public void Clear() => lines.Clear(); // Очищає всі рядки

    public TextLine GetLongestLine()
    {
        if (lines.Count == 0) throw new InvalidOperationException("Container is empty");
        return lines.OrderByDescending(l => l.GetLength()).First();
    }

    public double GetDigitPercentage()
    {
        int totalLength = lines.Sum(line => line.GetLength());
        int totalDigits = lines.Sum(line => line.GetDigitCount());
        return totalLength == 0 ? 0.0 : (double)totalDigits / totalLength * 100;
    }

    public int GetTotalCharacterCount() => lines.Sum(line => line.GetLength()); // Загальна кількість символів
}
