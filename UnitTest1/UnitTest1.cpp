#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.1(string)/Laba 8.1(string).cpp"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str{102};
			Count(str);
			Change(str);
		}
	};
}
