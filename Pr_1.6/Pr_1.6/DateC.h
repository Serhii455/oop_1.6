//DateC.h

#pragma once
#include <string>

class DateC
{
	class Triad
	{
		int day, month, year;
	
	public:
		bool Init(int d, int m, int y);
		void Read();
		void Display() const;

		void setDay(int d) { day = d; };
		void setMonth(int m) { month = m; };
		void setYear(int y) { year = y; };

		int getDay() const { return this->day; };
		int getMonth() const { return this->month; };
		int getYear() const { return this->year; };

		std::string toString();

		void incremDay();
		void incremMonth();
		void incremYear();
	};

	Triad triad;

public:
	bool Init(int, int, int);
	void Read();
	void Display() const;

	void incremDay();
	void incremMonth();
	void incremYear();

	void moreDays(int n);
	void moreMonths(int n);
	void moreYears(int n);

	std::string toString();
};

