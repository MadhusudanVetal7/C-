#include<iostream>
using namespace std;


int main()
{
    int Input = 0;
            // 0    1    2    3     4    5   6
    enum Days{sun, Mon, tue, wed, thus, fri, sat};

    enum Days obj;

    obj = tue;

    cout<<obj<<"\n";
    cout<<sizeof(obj)<<"\n";

    enum Gender{Female = 1, Male = 2};
    cout<<"enter your gender\n";
    cout<<"1: Female\n";
    cout<<"2: Male\n";

    cin>>Input;

    switch(Input)
    {
        case Female:
            cout<<"Tax free limit is 3,00,000\n";
            break;

        case Male:
            cout<<"Tax free limit is 2,50,000\n";
            break;

        default:
            cout<<"Invalid gender\n";
            break;
    }

    return 0;
}