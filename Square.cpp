#include "Square.h"

Square::Square(double s, const string& n) : Rectangle(s, s, n), side(s) {
	setName(n);
}

// Accessor
double Square::getSide() const {
	return side;
}