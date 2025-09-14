#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum[40];
    sum[0] =0;
    sum[1] =1;
    for (int i=2;i<=n;i++) {
        sum[i]=sum[i-2]+sum[i-1];
    }
    for (int i=0;i<=n;i++) {
        cout << sum[i] << " ";
    }
    return 0;
}