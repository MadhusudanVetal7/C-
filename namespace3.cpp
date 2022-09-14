#include<iostream>

namespace Marvellous
{
    void fun()
        {
            std::cout<<"Inside fun Marvellous \n";
        }
}

namespace infosystem
{
    void fun()
        {
            std::cout<<"Inside fun INFOSYSTEM \n";
        }
}

int main()
{
    std::cout<<"Jay Ganesh\n";

    using namespace Marvellous;
    using namespace infosystem;

    infosystem::fun();
    
    return 0;
}
