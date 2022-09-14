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

        Demo(int a, int b) : i(a),j(b)
        {
            cout<<"Inside parameterised\n";
        }
};

int main()
{
    Demo obj(11,12);
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    obj.i++;

    cout<<obj.i<<"\n";

    return 0;
}