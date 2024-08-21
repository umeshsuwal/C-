// 7.Write a C++program to input time in second convert it into hour, minute and second.

#include <iostream>
using namespace std;

class Time {
private:
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

public:
    Time(int sec) {
        totalSeconds = sec;
        convertTime();
    }

    void convertTime() {
        hours = totalSeconds / 3600;
        totalSeconds = totalSeconds % 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    void displayTime() {
        cout << "Time is " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
    }
};

int main() {
    int sec;

    cout << "Enter time in seconds: ";
    cin >> sec;

    Time t(sec);

    t.displayTime();

    return 0;
}

