//1.1.cpp

#include "DateC.h"
#include <iostream>

using namespace std;

int main() {
	DateC date;

    cout << "Enter date:" << endl;
    date.Read();
    cout << "Initial date:" << endl;
    date.Display();

    date.incremDay();
    date.incremMonth();
    date.incremYear();

    cout << "\nUpdated (++) date:" << endl;
    date.Display();

    int n;
    cout << "n = "; cin >> n;

    date.moreDays(n);
    date.moreMonths(n);
    date.moreYears(n);

    cout << "\nUpdated (+n) date:" << endl;
    date.Display();

    cout << "\nDate as string: " << date.toString() << endl;

    return 0;
}