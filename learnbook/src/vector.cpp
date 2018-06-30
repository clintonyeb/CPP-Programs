#include "vector.h"
#include <stdexcept>
#include <algorithm>
#include <initializer_list>

namespace learn {
    Vector::Vector(int s) :elem{new double[s]}, sz{s} {}
    Vector::~Vector() {
        //delete[] elem;
    }

    Vector::Vector(std::initializer_list<double> ls){
        std::copy(ls.begin(), ls.end(), elem);
        sz = ls.size();
    }

    void Vector::push_back(double v){
        //elem.
    }

    double& Vector::operator[](int i)
    {
        if (i < 0 || size() <= i) throw std::length_error{"Vector::operator[]"};
        return elem[i];
    }

    int Vector::size() const
    {
        return sz;          
    }

    Vector::Vector(const Vector& v) :elem{new  double[v.sz]}, sz{v.sz} {
        for(int i = 0; i < v.sz; i++)
        {
            elem[i] = v.elem[i];
        }
    }

    Vector& Vector::operator=(const Vector& v) {
        delete [] elem;
        double* p = new double[v.sz];
        
        for(int i = 0; i < v.sz; i++)
        {
            p[i] = v.elem[i];
        }

        elem = p;
        sz = v.sz;
        return *this;
        
    }
    
    
}