using System;
using StringLibrary;

class Program {
    static void Main() {
        // Створення об'єкта похідного класу та ініціалізація рядком "hello"
        LetterString str = new LetterString("hello");
        
        // Виведення початкового значення рядка
        Console.WriteLine("Original string: " + str.GetValue());
        
        // Виконання сортування рядка
        str.SortString();
        
        // Виведення відсортованого рядка
        Console.WriteLine("Sorted string: " + str.GetValue());
        
        // Виведення довжини рядка
        Console.WriteLine("String length: " + str.GetLength());
    }
}