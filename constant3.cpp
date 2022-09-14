#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)      // Member initialization
        {
            i = 10;
            //j = 20;       not Allowed
        }

        Demo(int a, int b) : j(b)
        {
            i = a;
        }
};

int main()
{
    Demo obj(11,12);
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    return 0;
}