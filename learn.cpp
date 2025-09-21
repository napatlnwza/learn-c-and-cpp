#include <bits/stdc++.h>
using namespace std;

int main() {
    int m[2];
    cin >> m[0] >> m[1];
    int matrix[m[0]][m[1]];
    for (int i=0;i<m[0];i++) {
        for (int j=0;j<m[1];j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i=0;i<m[0];i++) {
        for (int j=0;j<m[1];j++) {
            cout << matrix[j][i] << " ";

        }
        cout << endl;
    }
    return 0;
}