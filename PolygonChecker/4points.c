#pragma warning(disable:4996) // --> same as CRT NO WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define PI 3.14159
#include "4points.h"

void fourpoint(double firstside, double secondside, double thirdside, double fourthside) {
	
	if (firstside == thirdside && secondside == fourthside) {
		printf("The lines form a rectangle!\n");
		printf("The rectangles perimeter is: %.2lf\n", perimeterCalculator(firstside, secondside, thirdside, fourthside));
		printf("The rectangles area is: %.2lf\n", areaCalculator(firstside, secondside, thirdside, fourthside));
		// This if statement will print out that the lines form a triangle however...
		// it will also print the perimeter and area of that rectangle
		
	}
	else {
		printf("The lines do not form a rectangle!\n");
		printf("The shapes perimeter is: %.2lf\n", perimeterCalculator(firstside, secondside, thirdside, fourthside));
		// If the polygon does not form a rectangle then the else statement will provide 
		// The shape is not a rectangle and displays the perimeter of the shape
	}
	
}

double perimeterCalculator(double firstside, double secondside, double thirdside, double fourthside) {

	double perimeter = firstside + secondside + thirdside + fourthside;
	return perimeter;
	// The perimeterCalculator function takes in 4 side lengths and adds them 
	// together to get the perimeter of the shape 

}
double areaCalculator(double firstside, double secondside, double thirdside, double fourthside) {
	double area = firstside * thirdside;
	return area;
	// The areaCalculator takes in 4 side lengths and takes the first and third in order 
	// to calculate the area of the rectangle due to the rectangles first and third 
	// sides must be different unless its a square. 
}