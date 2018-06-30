#include "complex.h"

namespace learn {
    Complex::Complex(double r, double i) {
        re = r;
        im = i;
    }
    Complex::Complex(double r) {
        re = r;
        im = 0;
    }
    Complex::Complex() {
        re = 0;
        im = 0;
    }

    double Complex::real() const{
        return re;
    }

    void Complex::real(double r){
        re = r;
    }

    double Complex::imag() const{
        return im;
    }
    
    void Complex::imag(double i){
        im = i;
    }

    Complex& Complex::operator+=(Complex c){
        re += c.re, im += c.im;
        return *this;
    }

    Complex& Complex::operator-=(Complex c) {
        re -= c.re, im -= c.im;
        return *this;
    }
    // Complex& operator*=(Complex){
    //     re *= c.re, im *= c.im;
    //     return *this;
    // }

    // Complex& operator/=(Complex){
    //     re /= c.re, im /= c.im;
    //     return *this;
    // }
}