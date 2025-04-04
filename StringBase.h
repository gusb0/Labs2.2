#ifndef STRINGBASE_H
#define STRINGBASE_H

#include <string>

// Базовий клас, що містить рядок та методи для роботи з ним
class StringBase {
protected:
    std::string value; // Захищене поле для зберігання рядка

public:
    // Конструктор без параметрів, ініціалізує порожній рядок
    StringBase() : value("") {}
    
    // Конструктор з параметром, ініціалізує рядок заданим значенням
    StringBase(const std::string& val) : value(val) {}
    
    // Конструктор копіювання, створює копію іншого об'єкта
    StringBase(const StringBase& other) : value(other.value) {}
    
    // Метод для отримання значення рядка
    std::string GetValue() const { return value; }
    
    // Метод для отримання довжини рядка
    size_t GetLength() const { return value.length(); }
};

#endif // STRINGBASE_H
