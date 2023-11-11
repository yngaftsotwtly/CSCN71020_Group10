#pragma warning(disable:4996) // --> same as CRT NO WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include "triangleSolver.h"
#include "TriangleInsideAngle.h"

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
			double side1, side2, side3;
			userTriangle(&side1, &side2, &side3);
			anglesofTriangle(side1, side2, side3);
		case 3:
			printf("Rectangle selected\n");
			printf("Select how you would like to choose input your sides.\n");
			printf("1. 4 separate sides");
			printf("2. 2 sides split into 4");
			scanf("%d", &rectangleMenu);
			if (rectangleMenu == 1) {
				int rectangleSidesSeparate[4] = { 0, 0, 0, 0 };
				int* rectangleSidesSeparatePtr = getRectangleSeparateSides(rectangleSidesSeparate);
				int sides[] = sidesofRectangle(rectangleSidesSeparatePtr[0], rectangleSidesSeparatePtr[1], rectangleSidesSeparatePtr[2], rectangleSidesSeparatePtr[3]);
				printf_s("%d, %d, %d, %d", sides[0], sides[1], sides[2], sides[3]);
			}

			else if (rectangleMenu == 2) {
				/* make sure when writing the code when you are doing the "Split Sides" function just use side[1] and side[2]
				 twice, if that doesent work. You will probably need to change this array to be somthing like
				 { side[1], side[1], side[2], side[2] }
				*/
				int rectangleSidesSplit[2] = { 0, 0 };
				int* rectangleSidesSplitPtr = getRectangleSidesSplit(rectangleSidesSplit);
				int sides[] = sidesofrectangle(rectangleSidesSplitPtr[0], rectangleSidesSplitPtr[1]);
				printf_s("%d, %d", sides[1], sides[2]);
			}

			else {
				printf_s("Invalid value entered");
				break;
			}
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

void userTriangle(double *side1, double *side2, double *side3) {

	printf("Enter the first side length: ");
	scanf_s("%lf", &side1);
	printf("Enter the second side length: ");
	scanf_s("%lf", &side2);
	printf("Enter the third side length: ");
	scanf_s("%lf", &side3);

}