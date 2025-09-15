#include <iostream>
using namespace std;

// ฟังก์ชันเรียกซ้ำเพื่อคำนวณแฟกทอเรียล
long long factorial(int n) {
    // เงื่อนไขพื้นฐาน: ถ้า n น้อยกว่าหรือเท่ากับ 1 ให้คืนค่า 1
    if (n <= 1) {
        cout << n << " ";
        return 1;
       
    }
    // ถ้ามากกว่า 1 ให้เรียกตัวเองซ้ำโดย n - 1
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) { // ตรวจสอบว่าตัวเลขเป็นบวกหรือไม่
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    }
    
    return 0;
}