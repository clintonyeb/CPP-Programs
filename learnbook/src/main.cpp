#include "complex.h"
#include "vector.h"
#include <iostream>
#include <cmath>
#include <cassert>

double sqrt_sum(learn::Vector v)
{
  double sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += sqrt(v[i]);
  }

  return sum;
}

int main()
{
  learn::Complex c(2);
  std::cout << "Real value " << c.real() << std::endl;
  std::cout << "Imaginary value " << c.imag() << std::endl;

  std::cout << "Vectors" << std::endl;

  // int sz;
  // std::cin >> sz;
  // std::cout << "Size: " << sz;
  // learn::Vector v(sz); // allocates a vector of size sz
  // for (int i = 0; i < v.size(); i++)
  // {
  //   v[i] = i + 1;
  // }

  // std::cout << "Sum: " << sqrt_sum(v) << std::endl;

  learn::Vector v2 = {1, 2, 3, 4};

  std::cout << "V2 Sum: " << sqrt_sum(v2) << std::endl;


  // Copying and Moving
  std::cout << "Copying" << std::endl;
  learn::Vector v3 = v2;
  std::cout << (v3.size() == v2.size()) << std::endl;
  std::cout << (v3[0] == v2[0]) << std::endl;
  v2[0] = 10;
  std::cout << (v2[0] == 10) << std::endl;
  std::cout << (v3[0] != 10) << std::endl;
  
  return 0;
}
