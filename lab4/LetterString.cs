using System;
using System.Linq;

namespace StringLibrary {
    // Похідний клас, що успадковує StringBase та додає метод сортування
    public class LetterString : StringBase {
        
        // Конструктор без параметрів, викликає конструктор базового класу
        public LetterString() : base() {}
        
        // Конструктор з параметром, викликає відповідний конструктор базового класу
        public LetterString(string val) : base(val) {}
        
        // Метод для сортування символів рядка за зростанням
        public void SortString() {
            value = new string(value.OrderBy(c => c).ToArray());
        }
    }
}