#include <stdio.h>
// เขียนเอง
int main() {
    int date[2];
    char time[5];
    printf("Enter date : \n");
    scanf("%d", &date[0]);
    printf("Enter time : \n");
    scanf("%s", time);
    if (date[0] >= 1 && date[0] <= 31) {
        if (date[0] == 1 || date[0] == 21 || date[0] == 31) {
            printf("Today is %d st and  current time is %s", date[0], time);
        }
        else if (date[0] == 2 || date[0] == 22) {
            printf("Today is %d nd and  current time is  %s", date[0], time);
        }
        else if (date[0] == 3 || date[0] == 23) {
            printf("Today is %d rd and  current time is  %s", date[0], time);
        }
        else {
            printf("Today is %d th and  current time is  %s", date[0], time);
        }
    }
    if (date[0] < 1 || date[0] >= 32)
    {
        printf("Invalid date");
    }
    return 0;
}