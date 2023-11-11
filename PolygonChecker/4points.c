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
	}
	else {
		printf("The lines do not form a rectangle!\n");
		printf("The shapes perimeter is: %.2lf\n", perimeterCalculator(firstside, secondside, thirdside, fourthside));
	}
}

double perimeterCalculator(double firstside, double secondside, double thirdside, double fourthside) {

	double perimeter = firstside + secondside + thirdside + fourthside;
	return perimeter;

}
double areaCalculator(double firstside, double secondside, double thirdside, double fourthside) {
	double area = firstside * thirdside;
	return area;
}