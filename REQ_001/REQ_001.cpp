#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(analyzeTriangleFunctionality)
		{
			/*This is testing the analyzeTriangle function's ability to 
			assess the type of triangle made from the given side lengths, 
			using the side lengths 1 2 and 3*/
			char TestTriangle[3] = {1,2,3};
			char* TestResult = analyzeTriangle(TestTriangle[0], TestTriangle[1], TestTriangle[2]);
			Assert::AreEqual("Scalene triangle", TestResult);
		}
	};
}
