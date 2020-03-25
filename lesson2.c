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

int main() {
    for (int i=0; i< 128; i++) {
        printf("%u\n", int2bin(i));    
    }
    
}