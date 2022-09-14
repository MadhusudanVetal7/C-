#include<iostream>
using namespace std;

// Public private
class Demo
{
        int i;
    public:
        int x;
    private:
        int y;
    public:
        Demo()
        {
            x = 10;
            y = 20;
            i = 30;

        }

        void fun()
        {
            cout<<"Inside public fun\n";
            cout<<y;      //Allowed
            gun();

        }
    private:
        void gun()
        {
            cout<<"Inside private gun\n";
            cout<<y;        // Allowed
        }

};


int main()
{
    Demo obj;

    cout<<obj.x<<"\n";
//    cout<<obj.y<<"\n";           // not allowed
//      cout<<obj.i<<"\n";        // not allowed

        obj.fun();
  //      obj.gun();

        return 0;

}
