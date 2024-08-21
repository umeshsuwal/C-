/* 5.Write a C++program that reads a number and finds sum of the squares of digits
 (For example, if the number if 235 then sum = 22+32+52 =38) */
 
 #include <iostream>
using namespace std;

int main() {
    int num, a, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        a = num % 10;     
        sum = sum + (a * a);        
        num = num / 10;                
    }

    cout << "Sum of the squares of the digits is: " << sum << endl;

    return 0;
}

