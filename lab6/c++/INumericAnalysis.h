#ifndef INUMERIC_ANALYSIS_H
#define INUMERIC_ANALYSIS_H

// Інтерфейс для аналізу цифр у тексті
class INumericAnalysis {
public:
    virtual double GetDigitPercentage() const = 0; // Повертає % цифр у тексті
    virtual ~INumericAnalysis() {}
};

#endif // INUMERIC_ANALYSIS_H