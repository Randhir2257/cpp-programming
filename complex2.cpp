#include <iostream>
using namespace std;

class Complex
{
    public:
    int real, img;

    void input()
    {
        cout << "Enter real and imaginery part:";
        cin >> real >> img;
    }

    Complex add (Complex c)
    {
        Complex result;

        result.real= real + c.real;
        result.img= img + c.img;

        return result;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.input();
    c2.input();

    c3= c1.add(c2);

    cout << "Result:";
    c3.display();

    return 0;
}
