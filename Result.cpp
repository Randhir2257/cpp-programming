#include <iostream>
using namespace std;

class Result
{
    public:
    int a, b, c, d, e;
    float maxmarks, total, percentage;

    void accept()
    {
        cout << "Enter maxmarks per subject:";
        cin >> maxmarks;

        cout << "Mathematics:";
        cin >> a;

        cout << "Physics:";
        cin >> b;

        cout << "Chemistry:";
        cin >> c;

        cout << "Biology:";
        cin >> d;

        cout << "Computer Science:";
        cin >> e;

    }
    void display()
    {
        total = a + b + c + d + e;
        percentage = (total / (maxmarks*5)) * 100;

        cout << "Total:" << total << endl;
        cout << "Percentage:" << percentage << endl;
    
    if (a >= maxmarks*35/100 && b >= maxmarks*35/100  && c >= maxmarks*35/100  && d >= maxmarks*35/100  && e >= maxmarks*35/100 )
    {cout << "Result: Pass";}
    else
    {cout << "Result:Fail";}
    }
};
int main()
{
    Result r;

    r.accept();
    r.display();

    return 0;
    
}
