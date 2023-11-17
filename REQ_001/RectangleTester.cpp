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
			double TestRectangle[4] = { 0,0,0,0 };
			double TestRectangle1[4] = { 2,2,2,2 };
			double TestRectangle2[4] = { 4,8,4,8 };
			double TestResult = areaCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			double TestResult1 = areaCalculator(TestRectangle1[0], TestRectangle1[1], TestRectangle1[2], TestRectangle1[3]);
			double TestResult2 = areaCalculator(TestRectangle2[0], TestRectangle2[1], TestRectangle2[2], TestRectangle2[3]);
			Assert::AreEqual(0.00, TestResult);
			Assert::AreEqual(4.00, TestResult1);
			Assert::AreEqual(32.00, TestResult2);
		}

		TEST_METHOD(rectanglePerimeter)
		{
			/*This is testing the the function coverage of the perimeterCalculator function. test is used to
			to show that the test functions properly.*/
			double TestRectangle[4] = { 0,0,0,0 };
			double TestRectangle1[4] = { 4,4,4,4 };
			double TestRectangle2[4] = { 6,2,6,2 };
			double TestResult = perimeterCalculator(TestRectangle[0], TestRectangle[1], TestRectangle[2], TestRectangle[3]);
			double TestResult1 = perimeterCalculator(TestRectangle1[0], TestRectangle1[1], TestRectangle1[2], TestRectangle1[3]);
			double TestResult2 = perimeterCalculator(TestRectangle2[0], TestRectangle2[1], TestRectangle2[2], TestRectangle2[3]);
			Assert::AreEqual(0.00, TestResult);
			Assert::AreEqual(16.00, TestResult1);
			Assert::AreEqual(16.00, TestResult2);
		}
	};
}
