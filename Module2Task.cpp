#include <iostream>
#include "Date.h"
#include "Time.h"

int main()
{
    Date* d1 = new Date(11,12,2023);
    Time* t1 = new Time(19,10,25);
    Date* d2 = new Date;
    Time* t2 = new Time;
    d1->Print();
    t1->Print();
    d2->Set(15, 11, 2014);
    t2->Set(15, 42, 25);
    d1->Read();
    t1->Read();
    d1->Print();
    d2->Print();
    t1->Print();
    t2->Print();
    std::cout << Less(*d1, *d2) << std::endl;
    std::cout << Equal(*d1, *d2) << std::endl;
    std::cout << Grater(*d1, *d2) << std::endl;
    std::cout << Less(*t1, *t2) << std::endl;
    std::cout << Equal(*t1, *t2) << std::endl;
    std::cout << Grater(*t1, *t2) << std::endl;
}
