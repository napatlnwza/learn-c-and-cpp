#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int greaters(int s,vector<int> num) {
    if (s==1) {
        return num[0];
    }
    else  if (s>1) {
        sort(num.begin() ,num.end(),greater());
        return num[0];
    }
}

int main() {
    vector<int> n;
    int size;
    cout << "Enter size : ";
    cin >> size;
    for (int i=0;i<size;i++) {
        cout << "Enter Number " << i << ": " << endl;
        int a;
        cin >> a;
        n.push_back(a);
    }
    cout << "Ans is " << greaters(size,n);
    return 0;
}