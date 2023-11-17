#include "pch.h"
#include "CppUnitTest.h"

extern "C" double anglesofTriangle(double side1, double side2, double side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(triangleInsideAngleFunctionalCoverage)
		{
			/*This is testing the the function coverage of the angles of triangle function. test is used to
			to show that the test functions properly.*/
			double TestTriangleAngle[3] = { 0,0,0 };
			double TestResult = anglesofTriangle(TestTriangleAngle[0], TestTriangleAngle[1], TestTriangleAngle[2]);
			Assert::AreEqual(0.00, TestResult);
		}

		TEST_METHOD(triangleInsideAngleStatementCoverage)
		{
			/*This is testing the statement coverage of the analyze triangle function. It tests to make sure
			the function runs when all inputs are true.*/
			double TestTriangle[3] = { 5,5,5 };
			double TestResult = anglesofTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual(180.00, TestResult);
		}


		//TEST_METHOD(triangeInsideAngleBracnchCoverage) {
			/*This is testing the branch coverage of the analyze triangle function. It runs
			two tests, "TestResult1" makes the statement true and "TestResult2" makes it false.*/
			/*char TestTriangle1[3] = {1,2,3};
			char TestTriangle2[3] = { 0,2,3 };
			char* TestResult1 = anglesofTriangle(TestTriangle1[0], TestTriangle1[1], TestTriangle1[2]);
			char* TestResult2 = anglesofTriangle(TestTriangle2[0], TestTriangle2[1], TestTriangle2[2]);
			Assert::AreEqual("Scalene triangle", TestResult1);
			Assert::AreEqual("Not a triangle", TestResult2);
			*/
		//}

		//TEST_METHOD(triangleInsideAngleConditionCoverage) {
			/*This is testing the the condition coverage of the analyze triangle function. it first runs a
			where all inputs are true. Then it runs 3 more tests making one of the inputs false
			each time.*/
			/*char TestTriangle1[3] = {1,2,3};
			char TestTriangle2[3] = { 0,2,3 };
			char TestTriangle3[3] = { 1,0,3 };
			char TestTriangle4[3] = { 1,2,0 };
			char* TestResult1 = anglesofTriangle(TestTriangle1[0], TestTriangle1[1], TestTriangle1[2]);
			char* TestResult2 = anglesofTriangle(TestTriangle2[0], TestTriangle2[1], TestTriangle2[2]);
			char* TestResult3 = anglesofTriangle(TestTriangle3[0], TestTriangle3[1], TestTriangle3[2]);
			char* TestResult4 = anglesofTriangle(TestTriangle4[0], TestTriangle4[1], TestTriangle4[2]);
			Assert::AreEqual("Scalene triangle", TestResult1);
			Assert::AreEqual("Not a triangle", TestResult2);
			Assert::AreEqual("Not a triangle", TestResult3);
			Assert::AreEqual("Not a triangle", TestResult4);
			*/
		//}
	};
}
