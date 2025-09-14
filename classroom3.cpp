#include <bits/stdc++.h>
using namespace std;

int main () {
    cout << "Enter Your name : ";
    char name[51];
    cin >> name;
    cout << "Hello " << name << endl;
    cout << "********************************" << endl;
    int hightemp[7],lowtemp[7];
    string day[7]={"Monday" ,"Tuesday" ,"Wednesday" ,"Thursday" ,"Friday" ,"Saturday" ,"Sunday"};
    for (int i=0;i<7;i++) {
        cout << "High Temp " << day[i] << " : " << endl;
        cin >> hightemp[i];
        cout << "Low Temp " << day[i] << " : " << endl;
        cin >> lowtemp[i];
    }
    sort(hightemp,hightemp + 7);
    sort(lowtemp,lowtemp  + 7);
    float avrhigh,avrlow,sumhigh,sumlow;
    for (int i=0;i<7;i++) {
        sumhigh+=hightemp[i];
        sumlow+=lowtemp[i];
    }
    avrhigh=sumhigh/7;
    avrlow=sumlow/7;
    cout << "*********************************" << endl;
    cout << "Max Temperature is " << hightemp[0] << endl;
    cout << "Min Temperature is " << lowtemp[0] << endl;
    cout << "Average High Temperature is " << fixed << setprecision (2) << avrhigh << endl;
    cout << "Average Low Temperature is " << fixed << setprecision (2) << avrlow << endl; 
    return 0;
}