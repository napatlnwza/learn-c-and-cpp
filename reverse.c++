#include <iostream>
#include <string>
using namespace std;

string reverse(string str) {
    if (str.length() < 1) {
        return str;
    }
    else {
        return str.back() + reverse(str.substr(0, str.length() - 1));
    }
}

int main() {
    string a;
    cout << "Enter String : ";
    cin >> a;
    cout << reverse(a);
    return 0;
}