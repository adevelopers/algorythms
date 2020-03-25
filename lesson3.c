// Урок 3
#include <stdio.h>
#include <stdlib.h>


/**
 * Задание 1.
 * Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной и не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.
 */


/**
 * Задание 3.
 * Реализовать бинарный алгоритм поиска в виде функции, которой передается отсортированный массив. Функция возвращает индекс найденного элемента или -1, если элемент не найден.
 */


int stepsOfSort(int *array, int N) {
    // сортируем
    int steps = 0;
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N-1; y++) {
            if (array[y] > array[y+1]) {
                int t = array[y];
                array[y] = array[y+1];
                array[y+1] = t;
            }
            steps += 1; 
        }
    }
    return steps;
}

int* generateArray(int limit) {
    int *array = (int*)malloc(sizeof(int)*limit);
    for (int i=0; i < limit; i++) {
        int r = rand() % limit;
        array[i] = r;
        printf("%d : %d\n", i, array[i]);
    }
    return array;
}

int find(int where[], int x, int low, int middle, int high) {
    int element = where[middle];
    
    if (low > high) {
        return -1;
    }

    if (low <= high && element != x) {
        if (element < x) {
            int L = middle + 1;
            int m = L + (high - L) / 2;
            return find(where, x, L, m, high);
        } else {
            int R = middle - 1;
            int m = low + (R - low) / 2;
            return find(where, x, low, m, R); 
        }
    } else if (element == x) {
        return middle;
    } else {
        return -1;
    }

};

int main() {

    // генерим 100 элементов
    int limit = 50;
    srand(100);
    int *array = generateArray(limit);

    array[40] = 17;
    // array[41] = 17;

    int steps = stepsOfSort(array, limit);
// поиск эклкмента в массиве
    // ищем 17
    int low = 0;
    int middle = limit >> 1;
    int high = limit;

    printf("\nmiddle = %d\nhigh -> %d\n steps: %d\n", middle, high, steps);

    printf("\nОтсортированный массив\n");
    for (int i=0; i < limit; i++) {

        printf("%d : %d\n", i, array[i]);
    }

    int result = find(array, 17, 0, limit >> 1, limit - 1);
    printf("\nresult -> %d\n", result);
    
};