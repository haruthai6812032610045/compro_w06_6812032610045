#include <stdio.h>

int main() {
    // --- แบบฝึกการใช้ Operator แบบเต็มและแบบย่อ ---

    // ข้อ 1: x = x - 4.0;
    double x_full = 10.0;
    double x_short = 10.0;

    x_full = x_full - 4.0;   // แบบเต็ม
    x_short -= 4.0;          // แบบย่อ

    printf("1. ผลลัพธ์ x = x - 4.0 → x_full = %.2f, x_short = %.2f\n", x_full, x_short);

    // ข้อ 2: x = 6.5 * x;
    x_full = 2.0;
    x_short = 2.0;

    x_full = 6.5 * x_full;   // แบบเต็ม
    x_short *= 6.5;          // แบบย่อ

    printf("2. ผลลัพธ์ x = 6.5 * x → x_full = %.2f, x_short = %.2f\n", x_full, x_short);

    // ข้อ 3: x = x % (y + z * a);
    int x_mod1 = 20, x_mod2 = 20;
    int y = 2, z = 3, a = 4;

    x_mod1 = x_mod1 % (y + z * a);   // แบบเต็ม
    x_mod2 %= (y + z * a);           // แบบย่อ

    printf("3. ผลลัพธ์ x %% (y + z * a) → x_mod1 = %d, x_mod2 = %d\n", x_mod1, x_mod2);

    // ข้อ 4: x = x / (2.0 * x);
    x_full = 4.0;
    x_short = 4.0;

    x_full = x_full / (2.0 * x_full);   // แบบเต็ม
    x_short /= (2.0 * x_short);         // แบบย่อ

    printf("4. ผลลัพธ์ x / (2.0 * x) → x_full = %.2f, x_short = %.2f\n", x_full, x_short);

    // ข้อ 5: total = total + (price * quantity - discount);
    double price = 10.0, quantity = 2.0, discount = 3.0;
    double total_full = 0, total_short = 0;

    total_full = total_full + (price * quantity - discount);   // แบบเต็ม
    total_short += (price * quantity - discount);              // แบบย่อ

    printf("5. total = total + (price * quantity - discount) → total_full = %.2f, total_short = %.2f\n", total_full, total_short);

    // ข้อ 6: x = x * (1 + rate / 100);
    double rate = 5.0;
    x_full = 100.0;
    x_short = 100.0;

    x_full = x_full * (1 + rate / 100);   // แบบเต็ม
    x_short *= (1 + rate / 100);          // แบบย่อ

    printf("6. x = x * (1 + rate / 100) → x_full = %.2f, x_short = %.2f\n", x_full, x_short);

    // ข้อ 7: score = score - (penalty * (mistake + 1));
    int score1 = 100, score2 = 100;
    int penalty = 2, mistake = 3;

    score1 = score1 - (penalty * (mistake + 1));   // แบบเต็ม
    score2 -= (penalty * (mistake + 1));           // แบบย่อ

    printf("7. score = score - (penalty * (mistake + 1)) → score1 = %d, score2 = %d\n", score1, score2);

    return 0;
}