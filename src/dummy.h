//
// src/dummy.h
//

#ifndef SRC_DUMMY_H_
#define SRC_DUMMY_H_

class Dummy {
 public:
    Dummy();
    Dummy(const int &a, const double &b);
    int geta() const;
    void seta(const int &a);
    double getb() const;
    void setb(const double &b);
 private:
    int m_a;
    double m_b;
};

#endif  // SRC_DUMMY_H_
