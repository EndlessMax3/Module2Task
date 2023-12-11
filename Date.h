#pragma once

class Date;
bool Equal(const Date& d1, const Date& d2);
bool Less(const Date& d1, const Date& d2);
bool Grater(const Date& d1, const Date& d2);

class Date {
	
private:
	int _day;
	int _month;
	int _year;

public:
	void Set(int day, int month, int year);
	void Print();
	void Read();
	Date(int day = 1, int month = 1, int year = 2000)
		: _day(day), _month(month), _year(year)
	{}

	bool Equal(const Date& d1) const
	{
		return ::Equal(*this, d1);
	}

	bool Equal() const
	{
		Date d(1, 1, 2000);
		return ::Equal(*this, d);
	}

	friend bool Equal(const Date& d1, const Date& d2);

	bool Less(const Date& d1) const
	{
		return ::Less(*this, d1);
	}

	bool Less() const
	{
		Date d(1, 1, 2000);
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
};
