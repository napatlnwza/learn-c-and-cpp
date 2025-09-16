#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long int sum(vector<int> n) {
    
    if (n.size()==0) {
        return 0;
    }
    else {
        vector<int> rest(n.begin() +1 ,n.end());
        return n[0] + sum(rest);
    }

}

int main() {
    vector<int> n;
    cout << "Enter size Array : ";
    int size;
    cin >> size;
    for (int i=0;i<size;i++) {
        cout << "Enter Number : " << i << endl;
        int a;
        cin >> a;
        n.push_back(a);
    }
    cout << sum(n);
}