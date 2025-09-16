#include <iostream>
#include <vector>
using namespace std;

long int sum(vector<int> n) {
    sort(n.begin(), n.end())
    if (n[0]<=0) {
        return 0;
    }
    else if (n[0]>0) {
        return n+n[-1];
    }

}

int main() {
    vector<int> n;
    cout << "Enter size Array : ";
    int size;
    cin >> size;
    for (int i=0;i<size;i++) {
        cout << "Enter Number " << i;
        int a;
        cin >> a;
        n.push_back(a);
    }
    cout << sum(n);
}