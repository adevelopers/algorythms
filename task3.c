// Урок 1
// Худяков Кирилл
#include <stdio.h>
#include <math.h>
#include "assert.h"
#include "foreach.h"

// Задание 2
// Написать программу обмена значениями двух целочисленных переменных: Без третьей переменной

int main() {

    int a = 1;
    int b = 2;
    
    printf("a=%d & b=%d\n", a, b);
    
    a += b;
    b = a - b;
    a -= b;
    
    printf("a=%d & b=%d\n", a, b);

    return 0;
}