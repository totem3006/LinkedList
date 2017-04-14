#include "stdafx.h"
#include "CppUnitTest.h"
#include "LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LinkedListUnitTest {
    TEST_CLASS(UnitTest1)
    {
    public:

    TEST_METHOD(Test001_SimpleSmoke)
    {
        std::string Result("1");
        std::string Expected("1");

        Assert::AreEqual(Expected, Result);
    }
    };
}