#include "pch.h"
#include "CppUnitTest.h"
#include "D:/7/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int f = 0;
			int p = 0;
			int** a = new int* [15, 11, 30, 31, 2, 18, 5];
			c = Calc(a, 0, 5, f, p);
			Assert::AreEqual(c, 0);

		}
	};
}
