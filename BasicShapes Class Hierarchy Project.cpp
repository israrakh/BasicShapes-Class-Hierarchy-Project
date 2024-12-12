// BasicShapes Class Hierarchy Project.cpp :

#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {

	vector <BasicShape*> shapes; // using vector in order to manage the size dynamically and give more felxiblity

	// Adding two circle objects
	shapes.push_back(new Circle(1.0, 1.0, 4.0, "Circle1"));
	shapes.push_back(new Circle(0.0, 2.0, 5.0, "Circle2"));

	// Adding two rectangle objects
	shapes.push_back(new Rectangle(5.0, 2.0, "Rectangle1"));
	shapes.push_back(new Rectangle(6.0, 3.0, "Rectangle2"));

	// Adding one square object
	shapes.push_back(new Square(6.0, "Square"));


	// Displaying the name and area of each shape
	for (BasicShape* shape : shapes) {
		cout << "Shape: " << shape->getName() << ", Area: " << shape->getArea() << endl;
	}

	// Cleaning up the memory 
	for (BasicShape* shape : shapes) {
		delete shape;
	}

	return 0;
}