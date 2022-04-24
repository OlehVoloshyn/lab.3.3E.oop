#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.3.3E/Object.h"
#include "../lab.3.3E/Liquid.h"
#include "../lab.3.3E/Object.cpp"
#include "../lab.3.3E/Liquid.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Object r;
			Liquid t, a;
			t.setDensity(9);
			a.setDensity(9);
			Assert::AreEqual(t.getDensity(), a.getDensity());
		}
	};
}
