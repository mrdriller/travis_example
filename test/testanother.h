//
// test/testanother.h
//

#ifndef TEST_TESTANOTHER_H_
#define TEST_TESTANOTHER_H_

#include <QTest>

class TestAnother : public QObject {
    Q_OBJECT

 private slots:
    void Product();
    void Sum();
};

#endif  // TEST_TESTANOTHER_H_
