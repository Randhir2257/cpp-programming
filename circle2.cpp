#include <iostream>
using namespace std;

class Circle
{
    public:
    float radius;

    void accept()
    {
    cout << "Enter radius:";
    cin >> radius;
    }

    void area()
    {
    cout << "Area:" << 3.14 * 3.14 * radius << endl;
    }

    void circumference()
    {
    cout << "Circumference:" << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Circle c;

    c.accept();
    c.area();
    c.circumference();

    return 0;
}
