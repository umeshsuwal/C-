// 4.Write a C++program that reads a number and tests whether is it multiple of 5 but not 11

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> number;
    
    if (num % 5 == 0 && num % 11 != 0) {
        cout << num << " is a multiple of 5 but not 11." << endl;
    } 
    else if (num % 5 == 0 && num % 11 == 0) {
    	cout << num << " is multiple of both 5 and 11." << endl;
	}
	else {
    	cout << num << " is not a multiple of 5 and 11." << endl;
	}
