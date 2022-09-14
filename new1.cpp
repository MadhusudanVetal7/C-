#include<iostream>

using namespace std;

class Demo
{
    public:
    int x;
    int y;
    Demo()
    {
        cout<<"Inside default constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";

    }
    void fun()
    {
        cout<<"Inside fun\n";

    }
};

int main()
{
    Demo obj;           //Static object creation

    Demo *ptr = NULL;

    ptr = new Demo;     //dynamic object creation

    obj.fun();          // Direction accessing operator

    ptr->fun();         // indirect accessing operator

    delete ptr;

    //logic


    return 0;
}