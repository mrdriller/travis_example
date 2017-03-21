//
// test/testdummy.cpp
//

#include "src/dummy.h"
#include <QtTest/QtTest>
#include <iostream>
#include "testdummy.h"

void TestDummy::initialization() {
    Dummy dummy(-12, 2.33);
    QCOMPARE(-12, dummy.geta());
    QCOMPARE(2.33, dummy.getb());
}
