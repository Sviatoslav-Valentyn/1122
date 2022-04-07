#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.1/Triangle.h"
#include "../lab 1.1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle k;
			k.set_first(2);
			k.set_second(2);
			Assert::AreEqual(8., k.Hypotenuse());
		}
	};
}
