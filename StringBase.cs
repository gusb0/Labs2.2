using System;
using System.Linq;

namespace StringLibrary {
    // Базовий клас, що містить рядок та методи для роботи з ним
    public class StringBase {
        protected string value; // Захищене поле для зберігання рядка

        // Конструктор без параметрів, ініціалізує порожній рядок
        public StringBase() { value = ""; }
        
        // Конструктор з параметром, ініціалізує рядок заданим значенням
        public StringBase(string val) { value = val; }
        
        // Конструктор копіювання, створює копію іншого об'єкта
        public StringBase(StringBase other) { value = other.value; }

        // Метод для отримання значення рядка
        public string GetValue() { return value; }
        
        // Метод для отримання довжини рядка
        public int GetLength() { return value.Length; }
    }
}