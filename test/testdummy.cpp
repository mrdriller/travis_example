//
// TestDummy.cpp
//

#include "src/dummy.h"
#include <QtTest/QtTest>
#include <iostream>
#include "testdummy.h"

void TestDummy::initialization() {
    Dummy dummy(-12, 2.33);
    QVERIFY(dummy.geta() == -12);
    QVERIFY(dummy.getb() == 2.33);
}
