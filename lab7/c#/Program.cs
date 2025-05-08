using System;
using ExpressionLib; // Підключення бібліотеки класів

namespace ExpressionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            // Створення масиву об’єктів класу Expression
            Expression[] expressions = new Expression[]
            {
                new Expression(2, 3, 1),    // Валідний вираз
                new Expression(1, 2, -1),   // Помилка: корінь з від’ємного
                new Expression(1, 0, 1)     // Помилка: знаменник = 0
            };

            // Обробка кожного об’єкта через try-catch
            for (int i = 0; i < expressions.Length; i++)
            {
                try
                {
                    double result = expressions[i].Calculate(); // Виклик обчислення
                    Console.WriteLine($"Результат виразу {i + 1}: {result}");
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Помилка у виразі {i + 1}: {ex.Message}");
                }
            }

            Console.ReadKey(); // Пауза, щоб встигнути прочитати результат
        }
    }
}
