#include <stdio.h>

// ฟังก์ชัน swap รับ pointer มาแล้วสลับค่า
void swap(int *a, int *b) { // รับ pointer สองตัว
    int temp = *a; // เก็บค่าที่ pointer a ชี้ไว้ในตัวแปรชั่วคราว
    *a = *b; // นำค่าที่ pointer b ชี้มาใส่ที่ pointer a
    *b = temp;// นำค่าชั่วคราวมาใส่ที่ pointer b
}

int main() {
    int a = 5, b = 10; // ประกาศตัวแปรสองตัว

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกใช้ swap
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After  swap: a = %d, b = %d\n", a, b);

    return 0;
}