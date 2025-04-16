using System;

namespace GeometryLibrary
{
    public abstract class Figure
    {
        public abstract double GetArea();
        public abstract double GetPerimeter();
    }

    public class Ellipse : Figure
    {
        protected double SemiMajorAxis { get; }
        protected double SemiMinorAxis { get; }

        public Ellipse(double a, double b)
        {
            SemiMajorAxis = a;
            SemiMinorAxis = b;
        }

        public override double GetArea()
        {
            return Math.PI * SemiMajorAxis * SemiMinorAxis;
        }

        public override double GetPerimeter()
        {
            return Math.PI * (3 * (SemiMajorAxis + SemiMinorAxis) -
                Math.Sqrt((3 * SemiMajorAxis + SemiMinorAxis) * (SemiMajorAxis + 3 * SemiMinorAxis)));
        }
    }

    public class Circle : Ellipse
    {
        public Circle(double radius) : base(radius, radius) { }

        public override double GetArea()
        {
            return Math.PI * SemiMajorAxis * SemiMajorAxis;
        }

        public override double GetPerimeter()
        {
            return 2 * Math.PI * SemiMajorAxis;
        }
    }
}
