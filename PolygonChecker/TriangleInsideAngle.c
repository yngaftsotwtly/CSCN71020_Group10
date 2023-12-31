#pragma warning(disable:4996) // --> same as CRT NO WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define PI 3.14159
#include "TriangleInsideAngle.h"

int anglesofTriangle(double side1, double side2, double side3) {

	int result;

	if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
		double angle1 = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
		double angle2 = acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
		double angle3 = acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
		// Calculates angles based on sides ---> uses common math formula 
		

		angle1 = angle1 * 180.0 / PI; // Rads to degrees 
		angle2 = angle2 * 180.0 / PI;
		angle3 = angle3 * 180.0 / PI;

		printf("The inside angles are %.2lf , %.2lf , %.2lf", angle1, angle2, angle3);
		// outputs angles to user 
		result = angle1 + angle2 + angle3;
		
	}
	else {
		printf("these dont make a triangle!");
		result = 0;
		// if the inputs do not make a triangle then the user will see it doesnt make a triangle 
	}

	
	return result;
}


