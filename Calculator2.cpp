#include <iostream>
using namespace std;

class Calculator
{
    public:
    
    int a, b;

    void accept()

    {
        cout << "Enter first number:";
        cin >> a;

        cout << "Enter second number:";
        cin >> b;

    }

    void display()
    {
        cout << "Addition:" << a + b << endl;
        cout << "Subtraction:" << a - b << endl;
        cout << "Multiplication:" << a * b << endl;
        cout << "Division:" << (float)a / b << endl;
        cout << "Modolus:" << a % b;

        
    }
};

int main()
{
    Calculator c;

    c.accept();
    c.display();

    return 0;
}
