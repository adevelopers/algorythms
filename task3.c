// Урок 1
// Худяков Кирилл
#include <stdio.h>
#include <math.h>
#include "assert.h"
#include "foreach.h"

// Задание 2
// Написать программу обмена значениями двух целочисленных переменных:




int main() {

    int a = 1;
    int b = 2;
    int c; // добавляем 3-ю переменную
    
    printf("a=%d & b=%d\n", a, b);
    c = b; 
    b = a;
    a = c;
    printf("a=%d & b=%d\n", a, b);

    return 0;
}