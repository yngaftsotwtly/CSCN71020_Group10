/*#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "TriangleInsideAngle.h"

double anglesofTriangle(int side1, int side2, int side3) {
 
	double hypot = 0; 
	double sidelength = 0;
	double answer = 0;
	double angles[] = { 0, 0, 0 };
	//First checks to see if it makes a triangle
	if (side1 >= side2 && side1 >= side3) {
		hypot = side1 * side1;
		sidelength = side2 * side2; 
		answer = side3 * side3; 
		if ((hypot - sidelength) == answer) {
			angles[0] = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3)) * 180 / 3.14159;
			angles[1] = acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3)) * 180 / 3.14159;
			angles[2] = acos((side1 * side2 + side2 * side2 - side3 * side3) / (2 * side1 * side2)) * 180 / 3.14159;
			return angles[0,1,2];
		}
	}
	else if (side2 >= side1 && side2 >= side3) {
		hypot = side2 * side2;
		sidelength = side1 * side1;
		answer = side3 * side3;
		if ((hypot - sidelength) == answer) {
			angles[0] = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3)) * 180 / 3.14159;
			angles[1] = acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3)) * 180 / 3.14159;
			angles[2] = acos((side1 * side2 + side2 * side2 - side3 * side3) / (2 * side1 * side2)) * 180 / 3.14159;
			return angles[0, 1, 2];
		}
	}
	else if (side3 >= side1 && side3 >= side2) {
		hypot = side3 * side3;
		sidelength = side2 * side2;
		answer = side1 * side1;
		if ((hypot - sidelength) == answer) {
			angles[0] = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3)) * 180 / 3.14159;
			angles[1] = acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3)) * 180 / 3.14159;
			angles[2] = acos((side1 * side2 + side2 * side2 - side3 * side3) / (2 * side1 * side2)) * 180 / 3.14159;
			return angles[0, 1, 2];
		}
	}
	else {
		return 0;
	}
	
}*/