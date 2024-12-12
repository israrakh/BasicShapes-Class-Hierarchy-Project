#include "Circle.h"
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846 // Definning M_PI to represent Pi.
#endif // !M_PI


Circle::Circle(double x, double y, double r, const string& n) : xCenter(x), yCenter(y), radius(r) {
	setName(n);
	calcArea();
}

// Calculating Circle Area
void Circle::calcArea() {
	double area = M_PI * radius * radius;
	setArea(area);
}

double Circle::getXCenter() const {
	return xCenter;
}

double Circle::getYCenter() const {
	return yCenter;
}

double Circle::getRadius() const {
	return radius;
}
