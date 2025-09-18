#include <iostream>
using namespace std;

void printprint(char,int,int);

int main() {
    printprint('#' ,2,2);
    return 0;
}
void printprint(char x,int y,int z) {
    for (int i=1;i<=y;i++) {
        for (int j=1;j<=z;j++) {
            cout << x;
        }
        cout << endl;
    }
}