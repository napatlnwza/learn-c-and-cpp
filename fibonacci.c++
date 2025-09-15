#include <bits/stdc++.h>
using namespace std;

long int fibonacci(int n) {
    int sum;
    if (n == 1) {
        return 1;
    }
    else if (n == 0) {
        return 0;
    }
    else if (n > 1) {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << fibonacci(n);
}