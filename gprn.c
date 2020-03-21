// Урок 1
// Худяков Кирилл
#include <stdio.h>
#include <math.h>
#include "assert.h"
#include "foreach.h"

int main()
{
    int x, a, b, m;
    m = 100; // Вершина последовательности
    b = 3;
    a = 2;
    x = 1;
    int i;
    int modulus = 100;
    
    for (i = 0; i < modulus; i++)
    {
        x = (a * x + b) % m;
        printf("случайное %d\n", x^i);
    }

return 0;
}