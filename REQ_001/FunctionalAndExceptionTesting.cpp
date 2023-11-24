#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PolygonTests
{
	TEST_CLASS(REQ001)
	{
	public:

		//Not a Triangle
		TEST_METHOD(IdentifyNotATriangle)
		{
			/*Testing the analyzeTriangle function's ability to
			recognize when the given side lengths do not form a triangle,
			using the side lengths 0 2 3*/
			char TestTriangle[3] = { 0,2,3 };
			char* TestResult = analyzeTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual("Not a triangle", TestResult);
		}

		//NotATriangle Exception Testing
		TEST_METHOD(Exception_001)
		{
			/*Testing the analyzeTriangle function's ability to
			recognize when the given side lengths do not form a triange,
			using the "exceptional" side lengths -1 -2 3*/
			char TestTriangle[3] = { -1,-2,3 };
			char* TestResult = analyzeTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual("Not a triangle", TestResult);
		}

		/////////////////////////////////////////////////////////////////////////

			//Equilateral Triangle
		TEST_METHOD(IdentifyEquilateralTriangle)
		{
			/*Testing the analyzeTriangle function's ability to
			identify an equilateral triangle, using the side lengths 1 1 1*/
			char TestTriangle[3] = { 1,1,1 };
			char* TestResult = analyzeTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual("Equilateral triangle", TestResult);
		}
		/////////////////////////////////////////////////////////////////////////

		//Isosceles Triangle
		TEST_METHOD(IdentifyIsoscelesTriangle)
		{
			/*Testing the analyzeTriangle function's ability to
			identify an isosceles triangle, using the side lengths 1 2 and 3*/
			char TestTriangle[3] = { 1,2,1 };
			char* TestResult = analyzeTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual("Isosceles triangle", TestResult);
		}

		/////////////////////////////////////////////////////////////////////////

		//Scalene Triangle
		TEST_METHOD(IdentifyScaleneTriangle)
		{
			/*Testing the analyzeTriangle function's ability to
			identify a scalene triangle, using the side lengths 1 2 and 3*/
			char TestTriangle[3] = { 1,2,3 };
			char* TestResult = analyzeTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual("Scalene triangle", TestResult);
		}

		
	};
}
