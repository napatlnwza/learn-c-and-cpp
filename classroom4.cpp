#include <bits/stdc++.h>
using namespace std;

int classroom1() {
    int date;
    char time[10];
    cout << "Enter date : ";
    cin >> date;
    cout << "Enter time : ";
    cin >> time;
    if (date >= 1 && date <= 31)
    {
        if (date == 1 || date == 21 || date == 31)
        {
            cout << "Today is " << date << "st and current time is " << time << endl;
        }
        else if (date == 2 || date == 22)
        {
            cout << "Today is " << date << "nd and current time is " << time << endl;
        }
        else if (date == 3 || date == 23)
        {
            cout << "Today is " << date << "rd and current time is " << time << endl;
        }
        else
        {
            cout << "Today is " << date << "th and current time is " << time << endl;
        }
    }
    if (date < 1 || date >= 32)
    {
        cout << "Invalid date" << endl;
    }
    return 0;
}

int classroom2() {
    int score[31]; //{23, 30, 40, 7, 48, 80, 6, 32, 96, 79, 67, 7, 17, 10, 66, 73, 21, 39, 36, 51, 98, 44, 16, 96, 100, 99, 72, 46, 41, 30};
    for (int i = 0; i < 31; i++)
    {
        cout << "Enter score " << i << endl;
        cin >> score[i];
    }
    for (int i = 1; i < 30; i++)
    {
        int min = score[i];
        int j = i - 1;
        while (j >= 0 && score[j] > min)
        {
            score[j + 1] = score[j];
            j--;
        }
        score[j + 1] = min;
    }
    for (int i = 0;i<30;++i) {
        cout << score;
    }
    float avr = 0;
    int k = 0, sum = 0;
    while (k < 31)
    {
        sum += score[k];
        k++;
    }
    avr = sum / 30;
    cout << "Average is " << fixed << setprecision (2) << avr;
    return 0;
}
int classroom3() {
    cout << "Enter Your name : ";
    char name[50];
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
    //sort(hightemp, hightemp + 7, greater<int>());
    // เรียงจากกมากไปน้อย
}

int classroom4() {
    int ch;
    cout << "Enter choie" << endl;
    cout << "1.โจทย์ที่ 1" << endl;
    cout << "2.โจทย์ที่ 2" << endl;
    cout << "3.โจทย์ที่ 3" << endl;
    cin >> ch;
    switch (ch) {
        case 1:
            classroom1();
        break;
        case 2:
            classroom2();
        break;
        case 3:
            classroom3();
        break;
        defauit:
            cout << "Invalid choie" << endl;
    }
    return 0;
}

int main() {
    classroom4();
    return 0;
}