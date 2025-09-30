#include <stdio.h>

// ฟังก์ชัน doubleArray คูณค่าทุกตัวใน array ด้วย 2
void doubleArray(int *arr, int size) { // ใช้ pointer ในการเข้าถึง array
    for (int i = 0; i < size; i++) { // วนลูปผ่านทุกองค์ประกอบใน array
        *(arr + i) = *(arr + i) * 2; // คูณค่าที่ pointer ชี้ด้วย 2
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5}; // ประกาศ array
    int size = 5; // ขนาดของ array

    // แสดงค่าก่อนคูณ 
    printf("Before: "); // แสดงค่าก่อนคูณ
    for (int i = 0; i < size; i++) { // วนลูปผ่านทุกองค์ประกอบใน array
        printf("%d ", a[i]); // แสดงค่าปัจจุบัน
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    doubleArray(a, size); // ส่ง array และขนาดไปยังฟังก์ชัน

    // แสดงค่าหลังคูณ
    printf("After : "); // แสดงค่าหลังคูณ
    for (int i = 0; i < size; i++) { // วนลูปผ่านทุกองค์ประกอบใน array
        printf("%d ", a[i]); // แสดงค่าปัจจุบัน
    }
    printf("\n");

    return 0;
}