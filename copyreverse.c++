#include <iostream>
#include <string>
using namespace std;

string reversestr(string arr) {
    if (arr.length() < 1){
        return arr;
    }
    else {
        return arr.back() + reversestr(arr.substr(0,arr.length() - 1));
    }
}

int main() {
    string a;
    cout << "Enter string : ";
    cin >> a;
    cout << reversestr(a);
    return 0;
}