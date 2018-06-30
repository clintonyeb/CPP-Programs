#ifndef COMPLEX_H
#define COMPLEX_H

namespace learn {
    class Complex {
        private:
            double re, im;
        public:
            Complex(double, double);
            Complex(double);
            Complex();
            double real() const;
            void real(double);
            double imag() const;
            void imag(double);
            Complex& operator+=(Complex);
            Complex& operator*=(Complex);
            Complex& operator/=(Complex);
            Complex& operator-=(Complex);

    };
}

#endif