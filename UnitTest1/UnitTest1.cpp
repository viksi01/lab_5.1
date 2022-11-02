#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, 4);
			 Assert::AreEqual(t, -12.0);
				
		}
	};
}
