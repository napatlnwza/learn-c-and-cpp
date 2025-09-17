#include <iostream>
#include <cmath>
using namespace std;

long int power(int b,int e) {
    if (e == 0) {
        return 1;
    }
    else {
        return b * power(b,e-1);
    }
}

int main() {
    int base,ex;
    cout << "Enter base : " << endl;
    cin >> base;
    cout << "Enter Exponent : " << endl;
    cin >> ex;
    cout << "Ans is " << power(base,ex);
    return 0;
}