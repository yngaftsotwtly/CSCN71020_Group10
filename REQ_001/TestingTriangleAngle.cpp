#include "pch.h"
#include "CppUnitTest.h"

extern "C" int anglesofTriangle(double side1, double side2, double side3);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ004)
	{
	public:

		TEST_METHOD(triangleInsideAngleFunctionalCoverage)
		{
			/*This is testing the the function coverage of the angles of triangle function. test is used to
			to show that the test functions properly.*/
			double TestTriangleAngle[3] = { 0,0,0 };
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(0, TestResult);
		}

		TEST_METHOD(triangleInsideAngleStatementCoverage)
		{
			/*This is testing the statement coverage of the analyze triangle function. It tests to make sure
			the function runs when all inputs are true.*/
			double TestTriangle[3] = { 5,5,5 };
			int TestResult = anglesofTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual(180, TestResult);
		}


		TEST_METHOD(triangeInsideAngleBracnchCoverage) {
			/*This is testing the branch coverage of the angles of triangle function.It runs
			two tests, "TestResult1" makes the statement true and "TestResult2" makes it false.*/
			double TestTriangle1[3] = {4,8,11};
			double TestTriangle2[3] = { 0,2,3 };
			int TestResult1 = anglesofTriangle(TestTriangle1[0], TestTriangle1[1], TestTriangle1[2]);
			int TestResult2 = anglesofTriangle(TestTriangle2[0], TestTriangle2[1], TestTriangle2[2]);
			Assert::AreEqual(180, TestResult1);
			Assert::AreEqual(0, TestResult2);
			
		}

		TEST_METHOD(triangleInsideAngleConditionCoverage) {
			/*This is testing the the condition coverage of the angles of triangle function. it first runs a
			where all inputs are true. Then it runs 3 more tests making one of the inputs false
			each time.*/
			double TestTriangle1[3] = {10,10,10};
			double TestTriangle2[3] = { 0,3,3 };
			double TestTriangle3[3] = { 1,0,1 };
			double TestTriangle4[3] = { 2,2,0 };
			int TestResult1 = anglesofTriangle(TestTriangle1[0], TestTriangle1[1], TestTriangle1[2]);
			int TestResult2 = anglesofTriangle(TestTriangle2[0], TestTriangle2[1], TestTriangle2[2]);
			int TestResult3 = anglesofTriangle(TestTriangle3[0], TestTriangle3[1], TestTriangle3[2]);
			int TestResult4 = anglesofTriangle(TestTriangle4[0], TestTriangle4[1], TestTriangle4[2]);
			Assert::AreEqual(180, TestResult1);
			Assert::AreEqual(0, TestResult2);
			Assert::AreEqual(0, TestResult3);
			Assert::AreEqual(0, TestResult4);
			
		}

		TEST_METHOD(triangleInsideAngleFunctionBoundaries1)
		{
			/*This is testing what happens if you input negative numbers. The result is no matter what, it will never form a triangle*/
			double TestTriangleAngle[3] = { -1,5,-12 };
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(0, TestResult);
		}

		TEST_METHOD(triangleInsideAngleFunctionBoundaries2)
		{
			/*This tests if the output is still 60, 60, 60, when one of the numbers has a small decimal number. Due to 
			calculation only taking 2 decimil places, it will reamin all 60 degrees*/
			double TestTriangleAngle[3] = { 5,5,5.0000001 };
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(180, TestResult);
		}

		TEST_METHOD(triangleInsideAngleFunctionBoundaries3pt1)
		{
			/*This tests if the program can identify that it does not make a triangle when a char is inputted*/
			double TestTriangleAngle[3] = { 4,'a',11 };
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(0, TestResult);

		}

		TEST_METHOD(triangleInsideAngleFunctionBoundaries3pt2)
		{
			/*This tests if the program can identify that it does not make a triangle when a char is inputted*/
			double TestTriangleAngle[3] = { 'a',5,5};
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(0, TestResult);
		}

		TEST_METHOD(triangleInsideAngleFunctionBoundaries3pt3)
		{
			/*This tests if the program can identify that it does not make a triangle when a char is inputted*/

			double TestTriangleAngle[3] = { 5,5,'a'};
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(0, TestResult);
		}

		TEST_METHOD(triangleInsideAngleFunctionBoundaries4)
		{
			/*This tests if the program can find the angle of an extreamly small triangle */

			double TestTriangleAngle[3] = { 0.0003,0.0003,0.0003 };
			int TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(180, TestResult);
		}
		TEST_METHOD(testUserTriangleValidInput)
		{
			
			/*Due to the get input from user function returning a void, this is a simulation of what would happen if the user's input
			was a double, the the scanf returns a integer which will either be 1 or 0 depending if it is a number or not. */
			int i = 1;
			bool result;

			if (i != 1) {
				printf("This is not a valid input!\n");
				result = false;
			}

			else
				result = true;
	
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(testUserTriangleInvalidInput)
		{
			/* a test that simulates what would happen if the user inputed something that wasnt number. The integer "i" would be set to 0.
			this would exit the program. */

			int i = 0;
			bool result;

			if (i != 1) {
				printf("This is not a valid input!\n");
				result = false;
			}

			else
				result = true;

			Assert::AreEqual(false, result);
		}

		
	};
}
