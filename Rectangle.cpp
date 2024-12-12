#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, const string& n) : length(l), width(w) {
	setName(n);
	calcArea();
}

// Calculating rectangle area
void Rectangle::calcArea() {
	double area = length * width;
	setArea(area);
}

// Accessors
double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}