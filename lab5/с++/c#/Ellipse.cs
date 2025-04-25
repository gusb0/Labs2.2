using System;

namespace GeometryLib
{
    // Клас еліпс — спадкоємець Figure
    public class Ellipse : Figure
    {
        private double a; // піввісь a
        private double b; // піввісь b

        // Конструктор з параметрами
        public Ellipse(double a, double b)
        {
            this.a = a;
            this.b = b;
        }

        // Реалізація властивості площі (πab)
        public override double Area => Math.PI * a * b;

        // Наближена формула довжини еліпса (Раман)
        public override double Perimeter =>
            Math.PI * (3 * (a + b) - Math.Sqrt((3 * a + b) * (a + 3 * b)));
    }
}