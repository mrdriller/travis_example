//
// test/testdummy.h
//

#ifndef TEST_TESTDUMMY_H_
#define TEST_TESTDUMMY_H_

#include <QTest>

class TestDummy : public QObject {
    Q_OBJECT

 private slots:
    void initialization();
};

#endif  // TEST_TESTDUMMY_H_
