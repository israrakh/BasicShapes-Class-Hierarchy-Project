#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
	double area;
	string name;

public:
	// Mutators
	void setArea(double a);
	void setName(const string &n);

	// Accessors
	double getArea() const;
	string getName() const;

	virtual void calcArea() = 0; // Pure Virtual Function

	virtual ~BasicShape() = default; // Virtual Distructor for BasicShape class
};

#endif
