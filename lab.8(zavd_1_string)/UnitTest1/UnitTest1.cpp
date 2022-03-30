#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8(zavd_1_string)/lab.8(zavd_1_string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s1 = Include("55PO QS O", "QS");
			Assert::IsTrue;
		}

		TEST_METHOD(TestMethod2)
		{
			int s2 = Include("YGG56 7 Q S", "QS");
			Assert::IsFalse;
		}
	};
}
