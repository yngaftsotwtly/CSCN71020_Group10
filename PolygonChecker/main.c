#include <stdio.h>
#include <stdbool.h>
//Hello word 
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
//		case 2:
//			printf_s("Traingle angles selected.\n");
//			int triangleAngleSides[3] = { 0, 0, 0 };
//			int* triangleAngleSidesPtr = getTriangleAngleSides(triangleAngleSides);
//			double angles[] = anglesofTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
//			printf_s("%lf, %lf, %lf", angles[0], angles[1], angles[2]);
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
	printf_s("0. Exit\n");

	int shapeChoice;

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

//int* getTriangleAngleSides(int* triangleAngleSides) {
//	printf_s("Enter the three sides of the triangle: ");
//	for (int i = 0; i < 3; i++)
//	{
//		scanf_s("%d", &triangleAngleSides[i]);
//	}
//	return triangleAngleSides;
//}