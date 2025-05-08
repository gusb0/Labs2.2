using System;

namespace ExpressionLib
{
    public class Expression
    {
        // Приватні поля — захищені змінні
        private double a;
        private double c;
        private double d;

        // Конструктор
        public Expression(double a, double c, double d)
        {
            this.a = a;
            this.c = c;
            this.d = d;
        }

        // Метод для встановлення нових значень
        public void SetValues(double a, double c, double d)
        {
            this.a = a;
            this.c = c;
            this.d = d;
        }

        // Публічні властивості лише для читання
        public double A => a;
        public double C => c;
        public double D => d;

        // Приватний метод обчислення кореня √(42/d) з перевірками
        private double CalculateSqrtTerm(double d)
        {
            if (d == 0)
                throw new ArgumentException("Помилка: ділення на нуль у корені!");

            double value = 42 / d;

            if (value < 0)
                throw new ArgumentException("Помилка: корінь з від’ємного числа!");

            return Math.Sqrt(value);
        }

        // Основний метод розрахунку всього виразу
        public double Calculate()
        {
            double numerator = 2 * c - d * CalculateSqrtTerm(d); // Чисельник
            double denominator = c + a - 1;                      // Знаменник

            if (denominator == 0)
                throw new DivideByZeroException("Помилка: ділення на нуль у знаменнику!");

            return numerator / denominator;
        }
    }
}
