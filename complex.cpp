#include "complex.h"
#include <iostream>

complex::complex()
{
    real = 0;
    imaginary = 0;
}

complex::complex(double r, double i)
{
    real = r;
    imaginary = i;
}

double complex::get_real()
{
    return real;
}


double complex::get_imaginary()
{
    return imaginary;
}

void complex::set_real(double r)
{
    real = r;
}

void complex::set_imaginary(double i)
{
    imaginary = i;
}

complex complex::add(complex a, complex b)
{
    return complex(a.get_real() + b.get_real(), a.get_imaginary() + b.get_Imaginary());
}

void complex::print(complex x)
{
    if(x.get_imaginary() < 0)
        std::cout<<x.get_real()<<"-"<<x.get_imaginary()<<"i"<<std::endl;
    if(x.get_imaginary() > 0)
        std::cout<<x.get_real()<<"+"<<x.get_imaginary()<<"i"<<std::endl;
    if(x.get_imaginary() == 0)
        std::cout<<x.get_real()<<std::endl;
}
