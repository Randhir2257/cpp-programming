#include <iostream>
using namespace std;

class Fraction
{
    public:
    int nume1, deno1;
    int nume2, deno2;
    int nume, deno;

    void accept()
    {
cout << "Enter first fraction:";
cin >> nume1 >> deno1;

cout << "Enter second fraction:";
cin >> nume2 >> deno2;
    }
    void add()
    {
nume = nume1*deno2 + nume2*deno1;
deno = deno1*deno2;
    }

    void subtract()
    {
        nume = nume1*deno2 - nume2*deno1;
        deno = deno1*deno2;
    }
    void display()
    {
        int i;

        for (i=2; i <= nume && i <= deno; i++ )
        {
            if (nume % i == 0 && deno % i ==0 )
            {
                nume = nume/i;
                deno= deno/i;
                i=1;
            }
        }
        
        cout << nume << "/" << deno << endl;
    }
};

int main()
{
    Fraction f;

    f.accept();
    f.add();
    f.display();

    return 0;
}
