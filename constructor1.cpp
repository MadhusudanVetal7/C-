#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;      // Characteristics
        int y;      // characteristics

        Demo()      // default constructor
        {
            cout<<"Inside Defualt Constructor\n";
            x = 0;
            y = 0;
        }

        Demo(int i, int j)       // parameterised constructor
        {
            cout<<"Inside Parameterised Constructor\n";
            x = i;
            y = j;
        }

        ~Demo()     // destructor
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    cout<<sizeof(obj1)<<"\n";
    cout<<sizeof(obj2)<<"\n";

    cout<<"Value of x in obj1 : "<<obj1.x<<"\n";        // 11
    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";        // 51

    obj1.x++;

    cout<<"Value of x in obj1 : "<<obj1.x<<"\n";
    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";

    return 0;


}