#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction
{
public:
    int num, den;

    void accept()
    {
        cout << "Enter numerator and denominator: ";
        cin >> num >> den;
    }

    void simplify()
    {
        int i = 2;

        while(i <= abs(num) && i <= abs(den))
        {
            if(num % i == 0 && den % i == 0)
            {
                num = num / i;
                den = den / i;
            }
            else
            {
                i++;
            }
        }

        if(den < 0)
        {
            num = -num;
            den = -den;
        }
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.num = num * f.den + f.num * den;
        result.den = den * f.den;

        result.simplify();

        return result;
    }

    Fraction subtract(Fraction f)
    {
        Fraction result;

        result.num = num * f.den - f.num * den;
        result.den = den * f.den;

        result.simplify();

        return result;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1, f2, addResult, subResult;

    f1.accept();
    f2.accept();

    addResult = f1.add(f2);
    subResult = f1.subtract(f2);

    cout << "Addition: ";
    addResult.display();

    cout << "Subtraction: ";
    subResult.display();

    return 0;
}
