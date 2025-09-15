#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score[31]={23, 30, 40, 7, 48, 80, 6, 32, 96, 79, 67, 7, 17, 10, 66, 73, 21, 39, 36, 51, 98, 44, 16, 96, 100, 99, 72, 46, 41, 30};
    // for (int i = 0; i < 31; i++)
    // {
    //     printf("Enter score%d : ", i);
    //     scanf("%d", &score[i]);
    // }
    // for (int i = 1; i < 30; i++)
    // {
    //     int min = score[i];
    //     int j = i - 1;
    //     while (j >= 0 && score[j] > min)
    //     {
    //         score[j - 1] = score[j];
    //         j--;
    //     }

    //     score[j - 1] = min;
        
    // }s
    sort(score,  score + 30);
    for (int i = 0;i<30;++i) {
        printf("%d " ,score[i]);
    }
    float avr = 0;
    int k = 0, sum = 0;
    while (k < 31)
    {
        sum += score[k];
        k++;
    }
    avr = sum / 30;
    printf("\nAverage = %.2f", avr);
    return 0;
}