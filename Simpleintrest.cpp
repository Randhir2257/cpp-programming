#include <iostream>
using namespace std;

class Intrest
{
    public:
    float p;
    float r;
    float t;
     
    void accept()
    {
        cout << "Enter principal amount:";
        cin >> p;

        cout << "Enter rate:";
        cin >> r;

        cout << "Enter time period:";
        cin >> t;

    }
    void display()
    {
        cout << "Simple interst:" << ( p * r * t) / 100;
    }
};

    int main()
    {
        Intrest i;

        i.accept();
        i.display();

        return 0;
    }
