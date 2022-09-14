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

        Demo(Demo &ref)     // copy constructor
        {
            cout<<"Inside copy constructor\n";
            x = ref.x;
            y = ref.y;
        }

        ~Demo()     // destructor
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(obj1);


    return 0;


}