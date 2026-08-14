#include <iostream>
using namespace std;

class Complex
{
private:
int real1, imag1;
int real2, imag2;
int real, imag;

public:
void input()
{
cout << "Enter real and imaginary parts of first number:";
cin >> real1 >> imag1;

cout << "Enter real and imaginary parts of second number:";
cin >> real2 >> imag2;
}

void add()
{
real = real1 + real2;
imag = imag1 + imag2;
}
void subtract()
{
real = real1 - real2;
imag = imag1 - imag2;
}

void display()
{
cout << real << "+" << imag << "i" << endl;
} 
};

int main()
{
Complex c;
c.input();

cout << "Addition:";
c.add();
c.display();

cout << "Subtraction:";
c.subtract();
c.display();

return 0;
}
