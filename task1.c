// Урок 1
// Худяков Кирилл

// Задание 1
/*
1. Ввести вес и рост человека. 
Рассчитать и вывести индекс массы тела 
по формуле I=m/(h*h); 
где: 
m - масса тела в килограммах, 
h - рост в метрах.
*/
#include <stdio.h>
#include "assert.h"
#include "foreach.h"

// функция получения индекса массы тела
double bmi(double m, double h) {
    return m / ( h * h);
}

// Структурка для самопроверки
struct SampleBmi {
    double m;
    double h;
    double result;
};



int main() {
    // задаём входные и эталонные данные
    struct SampleBmi samples[] = { 
        {.m = 92, .h = 1.86, .result = 26.592670},
        {.m = 45, .h = 1.65, .result = 16.528926},
        {.m = 60, .h = 2, .result = 15}  
    }; 

    // проверяем выходные данные с эталонами
    foreach(struct SampleBmi *v, samples) {
        double result = bmi(v->m, v->h); 
        printf("\nСравниваем результат bmi=%.2lf с эталонным значением=%.2lf", result, v->result);
        assert((int)result == (int)v->result);   
    }
}