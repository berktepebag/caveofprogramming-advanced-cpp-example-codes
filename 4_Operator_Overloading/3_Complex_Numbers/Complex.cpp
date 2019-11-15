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

} // namespace complexnumbers