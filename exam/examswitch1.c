#include <stdio.h>

int main() {
    char choice;
    printf("MENU : \n");
    printf("A.หาพื้นที่สี่เหลี่ยม\n");
    printf("B.หาพื้นที่วงกลม\n");
    printf("Select your choice (A or B) : ");
    scanf("%c" ,&choice);
    //ประกาศตัววแปรตรงนี้ก็ได้ Ex. int a;
    switch (choice) {
        case 'A':
            int w,l,h;
            printf("Enter wide : "); //รับค่า
            scanf("%d" ,&w);
            printf("Enter long : ");
            scanf("%d" ,&l);
            printf("Enter high : ");
            scanf("%d" ,&h);
            printf("Ans is %d" ,w*l*h); //คำนวนและแสดงออก
        break;
        case 'B':
            float r,ans;
            printf("Enter radius : ");//รับค่า
            scanf("%f" ,&r);
            ans=4/3*3.14*(r*r*r); //คำนวน
            printf("Ans is %.2f" ,ans); //แสดงออก
        break;
        default :
            printf("Incorrect choice");
        break; //break ตรงนี้มีหรือไม่มีก็ได้
    }
    return 0; // ไม่ต้องสนใจ
}