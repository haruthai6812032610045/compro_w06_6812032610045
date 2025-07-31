#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าเริ่มต้นให้ตัวแปร
    int num1 = 5, num2 = 2;
    float val1 = 3.0, val2 = 4.5;
    int result1, result2;
    float result3, result4;

    // คำนวณ result1: ใช้ค่า num1 ก่อนแล้วค่อยเพิ่ม (++ หลัง)
    result1 = num1++ * num2 + ((int)val2 % 3);
    // num1 = 6 ตอนนี้หลังเพิ่ม

    // คำนวณ result2: ตรวจสอบเงื่อนไขด้วย AND (&&)
    result2 = (num1 > num2) && (((int)val1 / num2) < 2);
    // (6 > 2) && (3 / 2 < 2) → 1 && 1 = 1

    // คำนวณ result3: เพิ่มค่า val1 ก่อน (++ ก่อน) แล้วใช้ในการคำนวณ
    result3 = (++val1) * val2 - (num1 / 2);
    // val1 = 4.0, 4.0 * 4.5 = 18.0, 18.0 - 3 = 15.0

    // คำนวณ result4: OR เงื่อนไขแรกเป็นจริง จึงไม่ประเมินด้านหลัง
    result4 = ((val1 += 1.5) > val2) || (num2-- > 0);
    // val1 = 5.5, 5.5 > 4.5 = 1 → result4 = 1.0

    // แสดงผลลัพธ์ทั้งหมด
    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %.2f\n", result3);
    printf("result4 = %.2f\n", result4);

    return 0;
}