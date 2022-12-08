#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1rek/lab_6.1rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rek
{
	TEST_CLASS(UnitTest61rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 20;
			int arr[n] = {28, 35, 61, 66, 23, 57, 24, 55, 63, 22, 23, 9, 49, 18, 29, 28, 20, 11, 38};
			int suma = sum_element(arr, n, 0, 0);
			Assert::AreEqual(suma, 523);
		}
	};
}
