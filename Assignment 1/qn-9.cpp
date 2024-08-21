// 9.Write a C++ program that reads coefficients of quadratic equations and finds its roots

#include <iostream>
#include <cmath> 
using namespace std;

class QuadraticEquation {
private:
    int a, b, c;
    double root1, root2;
    bool hasRealRoots;

public:
    QuadraticEquation(double x, double y, double z) : a(x), b(y), c(z) {
        findRoots();
    }

    void findRoots() {
        double discriminant = b * b - 4 * a * c;

        if (a == 0) {
            cout << "The coefficient 'a' cannot be zero in a quadratic equation." << endl;
            hasRealRoots = false;
            return;
        }

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            hasRealRoots = true;
        } else if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            hasRealRoots = true;
        } else {
            hasRealRoots = false;
        }
    }
    void displayRoots() const {
        if (hasRealRoots) {
            if (b * b - 4 * a * c > 0) {
                cout << "Roots are real and different:" << endl;
                cout << "Root 1: " << root1 << endl;
                cout << "Root 2: " << root2 << endl;
            } else if (b * b - 4 * a * c == 0) {
                cout << "Roots are real and the same:" << endl;
                cout << "Root 1 = Root 2: " << root1 << endl;
            }
        } else {
            cout << "The equation has no real roots." << endl;
        }
    }
};

int main() {
    int x, y, z;
    cout << "Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> x;
    cout << "b: ";
    cin >> y;
    cout << "c: ";
    cin >> z;
    
    QuadraticEquation eqn(x, y, z);
    eqn.displayRoots();

    return 0;
}

