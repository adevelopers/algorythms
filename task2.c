// Урок 1
// Худяков Кирилл

// Задание 2
/*
Найти максимальное из четырех чисел. Массивы не использовать.
*/
#include <stdio.h>
#include <math.h>
#include "assert.h"
#include "foreach.h"


struct Input {
    int a;
    int b;
    int c;
    int d;
};

int maxOfFour(struct Input input) // Даже не придумывается как без массивов сделать меньше чем за N 
{
    int max = input.a;

    if (input.b > input.a) {
        max = input.b;
    } 

    if (input.c > max) {
        max = input.c;
    }

    if (input.d > max) {
        max = input.d;
    }
    
    return max;
}


int main() {
    struct Input inputs[] = {
            {.a = 3, .b = 5, .c = 2, .d = 12},
            {.a = 41, .b = 54, .c = 200, .d = 90},
            {.a = 1, .b = 892, .c = 3, .d = 4},
            {.a = 21, .b = 2, .c = 3, .d = 4},
        };

    foreach(struct Input *input, inputs) {
        int max = maxOfFour(*input);
        printf("Максимальное число -> %d\n", max);
    }

}