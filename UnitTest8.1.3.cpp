#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\ап\Yaryna visual studio\8.1.3\8.1.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char k = 'Q';
			char c = 'S';
			char* st = new char[10]{ " QS KKK" };
			bool t = Include(st, c, k);
			bool a = 1;
			Assert::AreEqual(t, a);
		}
	};
}
