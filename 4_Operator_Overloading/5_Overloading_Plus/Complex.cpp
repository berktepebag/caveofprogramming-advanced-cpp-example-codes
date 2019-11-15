#include "Complex.h"

namespace complexnumbers
{

Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(double real_in, double imaginary_in) : real(real_in), imaginary(imaginary_in) {}

Complex::Complex(const Complex &other)
{
    std::cout << "Copy constructor" << std::endl;
    real = other.real;
    imaginary = other.imaginary;
}
const Complex &Complex::operator=(const Complex &other)
{

    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

ostream &operator<<(ostream &out, const Complex &c)
{
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex &c1, double d){
    return Complex(c1.getReal()+d,c1.getImaginary());
}

bool Complex::operator==(const Complex &other){
    // return (real==other.real && imaginary==other.imaginary); // also can be used
    return (real==other.getReal() && imaginary==other.getImaginary());
}

bool Complex::operator!=(const Complex &other){
     return !(*this==other);
}

} // namespace complexnumbers