#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_1.6/DateC.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			DateC date;
			date.Init(20, 10, 2005);

			std::string expected = "20.10.2005";
			std::string actual = date.toString();

			Assert::AreEqual(expected, actual);
		}
	};
}
