#pragma once
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
//предварительное объ€вление класса и методов сравнени€
class Date;
bool Equal(const Date& d1, const Date& d2); 
bool Less(const Date& d1, const Date& d2);
bool Grater(const Date& d1, const Date& d2);
int Compare(const Date& d1, const Date& d2);

//класс ƒаты
class Date {
	
private:
	int _day;
	int _month;
	int _year;

public:
	void Set(int day, int month, int year);
	void Print();
	void Read();

	//конструктор по-умолчанию
	Date(){}
	Date(int day, int month, int year)
		: _day(day), _month(month), _year(year)
	{}
	bool Equal(const Date& d1) const
	{
		return ::Equal(*this, d1);
	}

	bool Equal() const
	{
		Date d;
		return ::Equal(*this, d);
	}

	friend bool Equal(const Date& d1, const Date& d2);

	bool Less(const Date& d1) const
	{
		return ::Less(*this, d1);
	}

	bool Less() const
	{
		Date d;
		return ::Less(*this, d);
	}

	friend bool Less(const Date& d1, const Date& d2);

	bool Grater(const Date& d1) const
	{
		return ::Grater(*this, d1);
	}

	bool Grater() const
	{
		Date d(1, 1, 2000);
		return ::Grater(*this, d);
	}

	friend bool Grater(const Date& d1, const Date& d2);

	int Compare() const
	{
		Date d(1, 1, 2000);
		return ::Compare(*this, d);
	}

	friend int Compare(const Date& d1, const Date& d2);
};
