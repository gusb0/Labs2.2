using System;
using GeometryLibrary;

class Program
{
    static void ShowFigureData(Figure fig)
    {
        Console.WriteLine($"Площа: {fig.GetArea()}");
        Console.WriteLine($"Довжина: {fig.GetPerimeter()}");
    }

    static void Main()
    {
        Ellipse ellipse = new Ellipse(5, 3);
        Circle circle = new Circle(4);

        Console.WriteLine("Еліпс:");
        ShowFigureData(ellipse);

        Console.WriteLine("\nКоло:");
        ShowFigureData(circle);
    }
}
