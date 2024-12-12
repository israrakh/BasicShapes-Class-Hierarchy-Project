#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
	double length;
	double width;

public:
	Rectangle(double l, double w, const string& n = "Rectangle"); // Constructor

	void calcArea() override;

	double getLength() const;
	double getWidth() const;
};

#endif // !RECTANGLE_H
