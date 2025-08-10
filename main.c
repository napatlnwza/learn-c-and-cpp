#include <stdio.h>
#include <math.h>
#define pi 3.14
const float t = 0.5;

int tri() {
    int base,height;
    float area;
    printf("Enter Base:>");
    scanf("%d", &base);
    printf("Enter Height:>");
    scanf("%d", &height);
    area = t * base * height;
    printf("Area of Triangle: %.2f\n", area);
}

int rec() {
    int length, width;
    printf("Enter Length:>");
    scanf("%d", &length);
    printf("Enter Width:>");
    scanf("%d", &width);
    printf("Area of Rectangle: %d\n", length * width);
}

int cir() {
    int radius;
    float area;
    printf("Enter Radius:>");
    scanf("%d", &radius);
    area = pi * pow(radius, 2);
    printf("Area of Circle: %.2f\n", area);
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
            cir();
            break;
        case 2:
            printf("You selected Rectangle\n");
            rec();
            break;
        case 3:
            printf("You selected Triangle\n");
            tri();
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