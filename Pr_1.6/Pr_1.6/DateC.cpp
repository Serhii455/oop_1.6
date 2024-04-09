//DateC.cpp

#include "DateC.h"
#include <iostream>
#include <sstream>

using namespace std;

bool DateC::Init(int d, int m, int y) {
	if (d <= 31 && d >= 1 && m <= 12 && m >= 1 && y >= 0 && y <= 2100) {
		triad.setDay(d);
		triad.setMonth(m);
		triad.setYear(y);
		return true;
	}
	else return false;
}

void DateC::Read() {
	int d, m, y;
	do {
		cout << "Enter day: ";
		cin >> d;
		cout << "Enter month: ";
		cin >> m;
		cout << "Enter year: ";
		cin >> y;
	} while (!Init(d, m, y));
}

void DateC::Display() const {
	cout << "d: " << triad.getDay() << "\nm: " << triad.getMonth() << "\ny: " << triad.getYear() << endl;
}

void DateC::incremDay() {
	triad.incremDay();
}

void DateC::incremMonth() {
	triad.incremMonth();
}

void DateC::incremYear() {
	triad.incremYear();
}

string DateC::toString() {
	stringstream sout;
	sout << triad.getDay() << "." << triad.getMonth() << "." << triad.getYear();
	return sout.str();
}

void DateC::Triad::incremDay() {
	int tmp = getDay();
	setDay(++tmp);
}

void DateC::Triad::incremMonth() {
	int tmp = getMonth();
	setMonth(++tmp);
}

void DateC::Triad::incremYear() {
	int tmp = getYear();
	setYear(++tmp);
}

void DateC::moreDays(int n) {
	triad.setDay(triad.getDay() + n);
}

void DateC::moreMonths(int n) {
	triad.setMonth(triad.getMonth() + n);
}

void DateC::moreYears(int n) {
	triad.setYear(triad.getYear() + n);
}

string DateC::Triad::toString() {
	std::stringstream sout;
	sout << getDay() << "." << getMonth() << "." << getYear();
	return sout.str();
}

bool DateC::Triad::Init(int d, int m, int y) {
	if (d <= 31 && d >= 1 && m <= 12 && m >= 1 && y >= 0 && y <= 2100) {
		setDay(d);
		setMonth(m);
		setYear(y);
		return true;
	}
	else return false;
}

void DateC::Triad::Read() {
	int d, m, y;
	do {
		cout << "Enter day: ";
		cin >> d;
		cout << "Enter month: ";
		cin >> m;
		cout << "Enter year: ";
		cin >> y;
	} while (!Init(d, m, y));

}

void DateC::Triad::Display() const {
	cout << "d: " << getDay() << "\nm: " << getMonth() << "\ns: " << getYear() << endl;
}