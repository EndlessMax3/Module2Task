#include <iostream>
#include "Date.h"
#include "Time.h"

int main()
{
    Date* d1 = new Date(11,12,2023); // создаем объект даты с перегруженным конструктором по-умолчанию
    Time* t1 = new Time(19,10,25); // создаем объект времени с перегруженным конструктором по-умолчанию
    Date* d2 = new Date; // создаем объект даты с конструктором по-умолчанию
    Time* t2 = new Time; // создаем объект времени с конструктором по-умолчанию
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
    std::cout << Compare(*t1, *t2) << std::endl;
    std::cout << Compare(*d1, *d2) << std::endl;
    
    //Module3 Date Constructors/Destructors
    Date d3(3);
    d3.Print();

    Date(14, 5, 2020).Print();

    Date d4 = d3;
    d4.Print();
    d3.Print();

    d1 = d2;
    d1->Print();
    d2->Print();

    d4.~Date();

    //Module3 Time Constructors/Destructors
    Time t3(3);
    t3.Print();

    Time(14, 15, 33).Print();

    Time t4 = t3;
    t4.Print();
    t3.Print();

    t1 = t2;
    t1->Print();
    t2->Print();

    t4.~Time();

    delete d1, d2, t1, t2; //очищаем память
}
