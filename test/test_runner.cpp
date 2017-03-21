//
// test/test_runner.cpp
//

#include <QtTest/QtTest>
#include "testdummy.h"
#include "testanother.h"

int main(int argc, char *argv[]) {
    int errorCode;
    {
        TestDummy testDummy;
        errorCode |= QTest::qExec(&testDummy, argc, argv);
    }
    {
        TestAnother testAnother;
        errorCode |= QTest::qExec(&testAnother, argc, argv);
    }
    return errorCode;
}
