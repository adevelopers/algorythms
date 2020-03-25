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

typedef struct Value {
    int a;
    int b;
}

#define max(a,b) (a>b?a:b)

typedef struct Queue {

} Queue;

int maximum(int a, int b, int cnt, int n) {
    if (cnt > n) { return a < b ? b : a; }; 
    return a < b ? maximum(b, a, ++cnt, n): a;
}

int maxOfFour(struct Input input) // Даже не придумывается как без массивов сделать меньше чем за N 
{
    return  max(input.d, max(input.c, max(input.b, input.a)));
}


int main() {
    struct Input inputs[] = {
            {.a = 3, .b = 5, .c = 2, .d = 12},
            {.a = 41, .b = 54, .c = 200, .d = 90},
            {.a = 1, .b = 892, .c = 3, .d = 4},
            {.a = 21, .b = 2, .c = 3, .d = 4},
            {.a = -21, .b = 3, .c = 3, .d = 4},
        };

    int r = maximum(inputs[0].a, inputs[0].b, 0, 4);
    printf("%d\n", r);
}