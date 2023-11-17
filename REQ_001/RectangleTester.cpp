#include "pch.h"
#include "CppUnitTest.h"

extern "C" double perimeterCalculator(double firstside, double secondside, double thirdside, double fourthside);
extern "C" double areaCalculator(double firstside, double secondside, double thirdside, double fourthside);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(rectangleArea)
		{
			/*This is testing the the function coverage of the areaCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 2,2,2,2 };
			double TestResult = areaCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			Assert::AreEqual(4.00, TestResult);
		}

		TEST_METHOD(rectangleArea2)
		{
			/*This is testing the the function coverage of the areaCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 0,0,0,0 };
			double TestRectangle1[4] = { 2,2,2,2 };
			double TestRectangle2[4] = { 4,8,4,8 };
			double TestResult = areaCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			Assert::AreEqual(0.00, TestResult);
		}

		TEST_METHOD(rectangleArea3)
		{
			/*This is testing the the function coverage of the areaCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 4,8,4,8 };
			double TestResult = areaCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			Assert::AreEqual(0.00, TestResult);
		}

		TEST_METHOD(rectanglePerimeter)
		{
			/*This is testing the the function coverage of the perimeterCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 0,0,0,0 };
			double TestResult = perimeterCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			Assert::AreEqual(0.00, TestResult);
		}

		TEST_METHOD(rectanglePerimeter2)
		{
			/*This is testing the the function coverage of the perimeterCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 4,4,4,4 };
			double TestResult = perimeterCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			Assert::AreEqual(16.00, TestResult);
			
		}

		TEST_METHOD(rectanglePerimeter3)
		{
			/*This is testing the the function coverage of the perimeterCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 6,2,6,2 };
			double TestResult = perimeterCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			Assert::AreEqual(16.00, TestResult);
		}
	};
}
