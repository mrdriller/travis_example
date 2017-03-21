//
// test/test_runner.cpp
//

#include <QtTest/QtTest>
#include "testdummy.h"

int main(int argc, char *argv[]) {
    int errorCode;

    TestDummy testDummy;
    return QTest::qExec(&testDummy, argc, argv);
}
