#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Money.h"
#include "../lab1.1/Money.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money n;
		   bool k = n.Init(5, 3);
		   Assert::AreEqual(k, true);
		}
	};
}
