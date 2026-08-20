#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;
    int real1, imag1;
    int real2, imag2;

    void add()
    {
        real = real1 + real2;
        imag = imag1 + imag2;

        cout << "Addition: " << real << "+" << imag << "i" << endl;
    }

    void subtract()
    {
        real = real1 - real2;
        imag = imag1 - imag2;

        cout << "Subtraction: " << real << "+" << imag << "i" << endl;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    Complex c;

    cout << "Enter real and imaginary parts of first number: ";
    cin >> c.real1 >> c.imag1;

    cout << "Enter real and imaginary parts of second number: ";
    cin >> c.real2 >> c.imag2;

    c.add();
    c.subtract();

    return 0;
}
