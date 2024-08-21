// 8.Write a C++ program that reads marks in five subjects and finds total marks, percentage.

#include <iostream>
using namespace std;

class Marks {
private:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

public:
    Marks(int p, int q, int r, int s, int t) {
        sub1 = p;
        sub2 = q;
        sub3 = r;
        sub4 = s;
        sub5 = t;
    }

    int Sum() {
    	int sum;
    	sum = sub1 + sub2 + sub3 + sub4 + sub5;
    	return sum;
	}

    float Percentage() {
    	return float(sub1 + sub2 + sub3 + sub4 + sub5)/100;
	}
};

int main() {
    int a,b,c,d,e;

    cout << "Enter mark in subject 1: ";
    cin >> a;
    cout << "Enter mark in subject 2: ";
    cin >> b;
    cout << "Enter mark in subject 3: ";
    cin >> c;
    cout << "Enter mark in subject 4: ";
    cin >> d;
    cout << "Enter mark in subject 5: ";
    cin >> e;

    Marks m(a,b,c,d,e);

    cout << "The Total Marks is: " << m.Sum() << endl;
    cout << "The Percentage is: " << m.Percentage() << endl;

    return 0;
}

