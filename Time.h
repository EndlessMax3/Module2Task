#pragma once
//предварительное объявление класса и методов сравнения
class Time;
bool Equal(const Time& t1, const Time& t2);
bool Less(const Time& t1, const Time& t2);
bool Grater(const Time& t1, const Time& t2);

//класс времени
class Time {

private:
	int _second;
	int _minute;
	int _hour;

public:
	void Set(int hour, int minute, int second);
	void Print();
	void Read();
	Time(int hour = 1, int minute = 1, int second = 1) //конструктор по-умолчанию
		: _second(second), _minute(minute), _hour(hour)
	{}

	bool Equal(const Time& t1) const
	{
		return ::Equal(*this, t1);
	}

	bool Equal() const
	{
		Time t(1, 1, 2000);
		return ::Equal(*this, t);
	}

	friend bool Equal(const Time& t1, const Time& t2);

	bool Less(const Time& t1) const
	{
		return ::Less(*this, t1);
	}

	bool Less() const
	{
		Time t(1, 1, 2000);
		return ::Less(*this, t);
	}

	friend bool Less(const Time& t1, const Time& t2);

	bool Grater(const Time& t1) const
	{
		return ::Grater(*this, t1);
	}

	bool Grater() const
	{
		Time t(1, 1, 2000);
		return ::Grater(*this, t);
	}

	friend bool Grater(const Time& t1, const Time& d2);
};

