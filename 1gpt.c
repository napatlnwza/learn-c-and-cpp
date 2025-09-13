#include <stdio.h>
// chatgGPT เขียน
int main() {
    int date;
    char time[20];   // เก็บ string ได้ เช่น "12:30"

    printf("Enter date : ");
    scanf("%d", &date);

    printf("Enter time : ");
    scanf("%s", time);

    if (date >= 1 && date <= 31) {
        if (date == 1 || date == 21 || date == 31) {
            printf("Today is %d st and current time is %s\n", date, time);
        } 
        else if (date == 2 || date == 22) {
            printf("Today is %d nd and current time is %s\n", date, time);
        } 
        else if (date == 3 || date == 23) {
            printf("Today is %d rd and current time is %s\n", date, time);
        } 
        else {
            printf("Today is %d th and current time is %s\n", date, time);
        }
    } 
    else {
        printf("Invalid date\n");
    }

    return 0;
}
