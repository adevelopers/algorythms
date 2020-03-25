//  Рекурсии
// Худяков Кирилл
#include <stdio.h>

// Задание 1:
// Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.
int int2bin(int num) {
    if (num >= 2) {
        return num % 2 + 10 * int2bin(num >> 1);
    } else {
        return num;
    }
}


// Задание 2.
// Реализовать функцию возведения числа a в степень b:
// a. без рекурсии;
// b. рекурсивно;
// c. *рекурсивно, используя свойство четности степени.
int iPow(int base, int a) {
    if (a == 0) {
        return 1;
    } if (a > 0) {
        return base * iPow(base, a - 1);
    } else {
         return 1 / iPow(base, -a);
    }
} 

int main() {

    // Задание 1:
    printf("\n\nЗадание 1.\n");
    for (int i=0; i< 128; i++) {
        printf("%u\n", int2bin(i));    
    }


    // Задание 2.
    printf("\n\nЗадание 2.\n");
    for (int i=0; i <= 16; i++) {
        printf("2^%i=%i\n",i, iPow(2, i));
    }
}