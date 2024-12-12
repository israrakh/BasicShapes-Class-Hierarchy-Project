#include "BasicShape.h"

void BasicShape::setArea(double a) {
	area = a;
}

double BasicShape::getArea() const {
	return area;
}

void BasicShape::setName(const string& n) {
	name = n;
}

string BasicShape::getName() const {
	return name;
}