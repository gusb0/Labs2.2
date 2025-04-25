#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Figure.h"

// Клас Еліпс успадковується від Figure
class Ellipse : public Figure {
private:
    double a; // піввісь a
    double b; // піввісь b

public:
    Ellipse(double a, double b);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif