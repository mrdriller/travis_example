//
// test/testanother.cpp
//

#include "src/another.h"
#include <QtTest/QtTest>
#include <iostream>
#include "testanother.h"

void TestAnother::Product() {
    Another another;
    QCOMPARE(12, another.Product(3, 4));
}

void TestAnother::Sum() {
    Another another;
    QCOMPARE(1, another.Sum(-5, 6));
}
