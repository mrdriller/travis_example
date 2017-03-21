//
// src/dummy.cpp
//

#include "src/dummy.h"

Dummy::Dummy() : m_a(0), m_b(0.0) {
}

Dummy::Dummy(const int &a, const double &b) {
    m_a = a;
    m_b = b;
}

int Dummy::geta() const {
    return m_a;
}

void Dummy::seta(const int &a) {
    m_a = a;
}

double Dummy::getb() const {
    return m_b;
}

void Dummy::setb(const double &b) {
    m_b = b;
}
