/* 10.Write a C++ program that reads a year (e.g 2012) and checks 
whether the entered year is leap year or not. */

#include <iostream>
using namespace std;

class LeapYear {
private:
    int year;

public:
    LeapYear(int x) {
    	year = x;
	}

    bool isLeapYear() const {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                return (year % 400 == 0);
            } else {
                return true;
            }
        }
        return false;
    }

    void displayLeapYear() const {
        if (isLeapYear()) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    }
};

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    LeapYear x(year);
    x.displayLeapYear();

    return 0;
}

