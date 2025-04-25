#ifndef CIRCLE_H
#define CIRCLE_H

#include "Ellipse.h"

// Клас Коло, що наслідує Ellipse (радіус = піввісі)
class Circle : public Ellipse {
public:
    Circle(double radius);
};

#endif