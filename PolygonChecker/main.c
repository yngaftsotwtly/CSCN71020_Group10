#pragma warning(disable:4996) // --> same as CRT NO WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "main.h"
#include "triangleSolver.h"
#include "TriangleInsideAngle.h"
#include "4points.h"

/*REQ_001 This system will inform the user if the three side 
lengths form a triangle or not. And if they do form a triangle, 
inform the user of the three inside angles of the triangle. */

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();
		int rectangleMenu;

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 2:
			printf_s("Traingle angles selected.\n");
			double side[3];//Initialize array for the input 
			for (int i = 0; i < 3; ++i) { //Loop to continue to ask for inputs until 3 inputs 
				userTriangle(&side[i], i + 1);
			}
			double side1 = side[0]; // Defining what is in the array to be able to pass through to the function 
			double side2 = side[1];
			double side3 = side[2];
			anglesofTriangle(side1, side2, side3);
		case 3:
			printf("Rectangle selected\n");
			double x[4], y[4]; 
			double sides[4];

			for (int i = 0; i < 4; ++i) {
				userInput(&x[i], &y[i], i + 1);
			}
			for (int i = 0; i < 3; ++i) {
				sides[i] = distance(x[i], y[i], x[i + 1], y[i + 1]);
			}
			sides[3] = distance(x[3], y[3], x[0], y[0]);

			double firstside = sides[0];
			double secondside = sides[1];
			double thirdside = sides[2];
			double fourthside = sides[3];

			fourpoint(firstside, secondside, thirdside, fourthside);
				
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Angles\n");
	printf_s("3. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice = 0;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}

//void userTriangle(double *side1, double *side2, double *side3) {
//	//Gathers user input 
//	printf("Enter the first side length: ");
//	scanf("%lf", &side1);
//	printf("Enter the second side length: ");
//	scanf("%lf", &side2);
//	printf("Enter the third side length: ");
//	scanf("%lf", &side3);
//
//}

void userTriangle(double* side, int counter) {
	printf("Enter the %d side length: ", counter);
	int i = scanf("%lf", side);
	if (i != 1) {
		printf("This is not a valid input!\n");
		exit(1);
	}

}

void userInput(double *x, double *y, int counter) {
	
	printf("Enter the %d x-coordinate: ", counter);
	int i = scanf("%lf", x);
	if (i != 1) {
		printf("This is not a valid input!\n");
		exit(1);
	}

	printf("Enter the %d y-coordinate: ", counter);
	int j = scanf("%lf", y);
	if (j != 1) {
		printf("This is not a valid input!\n");
		exit(1);
	}
	
}

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}