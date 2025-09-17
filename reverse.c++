#include <iostream>
#include <string>
using namespace std;

long int reverse(string str) {
    if (str.length == 0 || str.length == 1) {
        return str;
    }
    else if (str.length > 1) {
        return str.back() + reverse(str.substr(0, str.length() - 1));
    }
}

int main() {
    string a;
    cin >> a;
    cout << reverse(a);
    return 0;
}