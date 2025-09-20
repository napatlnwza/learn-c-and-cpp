#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  copymax(int s,vector<int> num) {
    if (s==1) {
        return num[0];
    }
    else if (s>1) {
        return max(num[s-1],copymax(s-1,num));
    }
}

int main() {
    int size;
    vector<int> arr;
    cout << "Enter size : ";
    cin >> size;
    for (int i=0;i<size;i++) {
        int a;
        cout << "Enter Num " << i+1 << " : ";
        cin >> a;
        arr.push_back(a);
    }
    cout << copymax(size,arr);
}