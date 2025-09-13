#include <stdio.h>

int main()
{
    int score[31];
    // รับข้อมูล
    for (int i = 0; i < 31; i++)
    {
        printf("Enter score%d : ", i);
        scanf("%d", &score[i]);
    }
    if (score[0] >= 0  && score[0] <= 100)
    {   // เรียงจากน้อยไปมาก 
        int min = score[0];
        score[0] = score[1];
        score[1] = ;
        for (int j = 0; j < 31; j++)
        {
            if (min )
        }
        // หาค่าเฉลี่ย
        float avr = 0;
        int k = 0, sum = 0;
        while (k < 31)
        {
            sum += score[k];
            k++;
        }
        avr = sum / 30;
        printf("\nAverage = %.2f", avr);
    }
    else if (score[0] < 0 || score[0] > 100)
    {
        printf("Error");
    }
    return 0;
}