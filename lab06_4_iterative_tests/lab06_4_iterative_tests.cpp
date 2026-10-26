
#include "pch.h"
#include "CppUnitTest.h"
#include "functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab06_4_iterative_tests
{
    TEST_CLASS(lab06_4_iterative_tests)
    {
    public:

        TEST_METHOD(TestFindMinAbsIndex)
        {
            double arr[] = { 3.0, -2.0, 5.0, 1.0, 7.0 };
            Assert::AreEqual(3, findMinAbsIndex(arr, 5));
        }

        TEST_METHOD(TestSumAbsAfterFirstNegative)
        {
            double arr[] = { 3.0, -2.0, 5.0, 1.0, 7.0 };
            Assert::AreEqual(13.0, sumAbsAfterFirstNegative(arr, 5), 1e-9);
        }

        TEST_METHOD(TestCompressArray)
        {
            double arr[] = { 3.0, -2.0, 5.0, 1.0, 7.0 };
            compressArray(arr, 5, 1.0, 5.0);

            double expected[] = { -2.0, 7.0, 0.0, 0.0, 0.0 };

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], arr[i], 1e-9);
        }

        TEST_METHOD(TestNoNegativeElements)
        {
            double arr[] = { 2.0, 4.0, 6.0 };
            Assert::AreEqual(0.0, sumAbsAfterFirstNegative(arr, 3), 1e-9);
        }
    };
}
