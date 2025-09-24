#include <stdio.h>
#include <math.h>
#define pi 3.14
const float t = 0.5;

float tri(float base, float height) {
    float area;
    area = t * base * height;
    return area;
}

float rec(float length, float width) {
    float area;
    area=length*width;
    return area;
}

float cir(float radius) {
    float area;
    area = (pi * pow(radius, 2));
    return area;
}

int choice() {
    int choice;
    printf("This is program find area\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("You selected Circle\n");
            float radius;
            printf("Enter Radius:>");
            scanf("%f" ,&radius);
            printf("Area of Circle: %.2f\n", cir(radius));
            break;
        case 2:
            printf("You selected Rectangle\n");
            float length, width;
            printf("Enter length:>");
            scanf("%f", &length);
            printf("Enter width:>");
            scanf("%f", &width);
            printf("Area of Rectangle: %.2f\n", rec(length, width));
            break;
        case 3:
            printf("You selected Triangle\n");
            float base, height;
            printf("Enter base:>");
            scanf("%f", &base);
            printf("Enter height:>");
            scanf("%f", &height);
            printf("Area of Triangle: %.2f\n", tri(base, height));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}
int main() {
    choice();
    return 0;
}