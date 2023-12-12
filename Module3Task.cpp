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
    delete d1, d2, t1, t2; //очищаем память
}
