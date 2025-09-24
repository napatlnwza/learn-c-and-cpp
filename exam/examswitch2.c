#include <stdio.h>

int main() {
    char ans;
    printf("What is 10*2+25/5-10 = ?"); //ตัวอย่าง
    printf("a.10\nb.15\nc.20\nd.25\ne.30\n");     //ตัวเลือก
    printf("Select your Answer : ");
    scanf("%c" ,&ans); //รับคำตอบ
    switch (ans) {
        case 'b':                   //ตรวจสอบคำตอบ
            printf("Correct");
        break;
        case 'a':                   
        case 'c':
        case 'd':
        case 'e':
            printf("Incorrect");
        break;
        default :
            printf("Error");
        break;
    }
    return 0;
}