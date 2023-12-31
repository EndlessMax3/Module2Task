#include "Date.h"

//������ ����, ����� � ���
void Date::Set(int day, int month, int year) 
{
    if (day >= 1 && day <= 31)
        this->_day = day;
    else cout << "Day are in wrong range (1 to 31)" << endl;
    if (month >= 1 && month <= 12)
        this->_month = month;
    else cout << "Month are in wrong range (1 to 12)" << endl;
    if (year >= 1900 && year <= 2100)
        this->_year = year;
    else cout << "Year are in wrong range (1900 to 2100)" << endl;
}

//������� ������ � �������
void Date::Print()
{
    setlocale(LC_ALL, "Russian");
    cout << "����: " << this->_day << '.' << this->_month << '.' << this->_year << endl;
}

//������� ������ � ���������� � �������� ��
void Date::Read()
{
    int day, month, year;
    cout << "������� ����: ";
    cin >> day;
    cout << "������� �����: ";
    cin >> month;
    cout << "������� ���: ";
    cin >> year;
    Set(day, month, year);
}

//�������� �� �������� ��� 
bool Equal(const Date& d1, const Date& d2)
{
    if ((d1._day == d2._day) && (d1._month == d2._month) && (d1._year == d2._year)) return 1;
    else return 0;
}

//�������� ����1 ������ ����2
bool Less(const Date& d1, const Date& d2)
{
    if (d1._year < d2._year) return 1;
    else if ((d1._year == d2._year) && (d1._month < d2._month)) return 1;
    else if ((d1._year == d2._year) && (d1._month == d2._month) && (d1._day < d2._day)) return 1;
    else return 0;
}
//�������� ����1 ������ ����2
bool Grater(const Date& d1, const Date& d2)
{
    if (d1._year > d2._year) return 1;
    else if ((d1._year == d2._year) && (d1._month > d2._month)) return 1;
    else if ((d1._year == d2._year) && (d1._month == d2._month) && (d1._day > d2._day)) return 1;
    else return 0;
}
//����� ��������� ���
int Compare(const Date& d1, const Date& d2)
{
    if (Less(d1, d2) == 1) return 0;
    if (Grater(d1, d2) == 1) return 1;
    if (Equal(d1, d2) == 1) return 2;
}