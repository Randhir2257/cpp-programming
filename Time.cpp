#include <iostream>
using namespace std;

class Time
{
    public:

    int hour1, min1, sec1;
     int hour2, min2, sec2;
     int hour, min, sec;

     void accept()
     {
        cout << "Enter first time:";
        cin >> hour1 >> min1 >> sec1;

        cout << "Enter second time:";
        cin >> hour2 >> min2 >> sec2;
     }
    
     void add()
     {
        sec = sec1 + sec2;
        min = min1 + min2;
        hour = hour1 + hour2;

        if (sec >= 60)
        {
            sec = sec - 60;
            min = min + 1;
        }
        if (min >= 60)
        {
            min = min - 60;
            hour = hour + 1;
        }
     }
     void display()
     {
        cout << "Result: " << hour << ":" << min << ":" << sec << endl;
     }
};

int main()
{
    Time t;

    t.accept();
    t.add();
    t.display();

    return 0;
}
