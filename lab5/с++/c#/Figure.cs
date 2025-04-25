namespace GeometryLib
{
    // Абстрактний базовий клас для фігур
    public abstract class Figure
    {
        public abstract double Area { get; }       // Абстрактна властивість площі
        public abstract double Perimeter { get; }  // Абстрактна властивість довжини
    }
}