#include <iostream>
using namespace std;

class Greaternumber
{
    public:
     int a;
     int b;

     void accept()
     {
     cout << "Enter first number:";
     cin >> a;

     cout << "Enter second number:";
     cin >> b;
     }

     void display()
     {
        if (a>b)
     {   cout << "Greater number:" << a;
     }
     else 
     {cout << "Greater number:" << b;}
    }
};
int main()
{
Greaternumber g;

g.accept();
g.display();

return 0;
}
