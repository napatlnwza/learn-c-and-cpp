#include <stdio.h>
// เขียนเอง
int main()
{
    int date;
    char time[10];
    printf("Enter date : ");
    scanf("%d", &date);
    printf("Enter time : ");
    scanf("%s", time);
    if (date >= 1 && date <= 31)
    {
        if (date == 1 || date == 21 || date == 31)
        {
            printf("Today is %d st and  current time is %s", date, time);
        }
        else if (date == 2 || date == 22)
        {
            printf("Today is %d nd and  current time is  %s", date, time);
        }
        else if (date == 3 || date == 23)
        {
            printf("Today is %d rd and  current time is  %s", date, time);
        }
        else
        {
            printf("Today is %d th and  current time is  %s", date, time);
        }
    }
    if (date < 1 || date >= 32)
    {
        printf("Invalid date");
    }
    return 0;
}