using System;
using System.Collections.Generic;
using GeometryLib;

namespace GeometryApp
{
    class Program
    {
        // Метод демонстрації поліморфізму
        static void PrintFigureInfo(Figure fig)
        {
            Console.WriteLine($"Area: {fig.Area}");
            Console.WriteLine($"Perimeter: {fig.Perimeter}");
        }

        static void Main(string[] args)
        {
            // Створення об’єктів
            Ellipse ellipse = new Ellipse(5.0, 3.0);
            Circle circle = new Circle(4.0);

            // Поліморфізм: зберігаємо у списку базового типу
            List<Figure> figures = new List<Figure> { ellipse, circle };

            foreach (var fig in figures)
            {
                PrintFigureInfo(fig); // Виклик віртуальних методів через базовий клас
                Console.WriteLine("---");
            }
        }
    }
}
