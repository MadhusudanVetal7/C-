#include<iostream>
using namespace std;


int main()
{
    enum Marvellous_Batches {PPA = 0, LB = 1, Python = 2};
    const int Fees[] = {15000, 16000, 17000};
    const float Duration[] = {3.5,4.0,3.5};
    int choice = 0;

    cout<<"Select the batch that you want to join\n";
    cout<<"0 : PPA\n";
    cout<<"1 : Logic Bulding\n";
    cout<<"2 : Python\n";

    cin>>choice;

    switch(choice)
    {
        case PPA:
            cout<<"Thank you for selecting Logic Building batch\n";
            cout<<"Duration is :"<<Duration[LB]<<"\n";
            cout<<"Fee are : "<<Fees[LB]<<"\n";
            break;

        case Python:
            cout<<"Thank you for selecting python batch\n";
            cout<<"Duration is : "<<Duration[Python]<<"\n";
            cout<<"Contact Admin : 7020713938\n";
            break;

            default:
            cout<<"Sorry there is no such batch\n";
            cout<<"Contact Admin : 7709805608\n";
            break;


    }
    cout<<"Thank you for visiting Marvellous Infosystem\n";

    return 0;
}