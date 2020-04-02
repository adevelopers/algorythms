// Урок 4
// Худяков Кирилл
#include <stdio.h>
#include <stdlib.h>


// Решить задачу о нахождении длины максимальной последовательности с помощью матрицы.
int LargestSubsequence(int ) {
    // получаем длину x
    // получаем длину y
   if length(x) < length(y)  // в таблице будет length(y) столбцов, и если length(x) меньше, выгоднее поменять местами x и y
     swap(x, y)
   m = length(x)
   n = length(y)
   for j = 0 to n
     lcs[0][j] = 0
     lcs[1][j] = 0
   for i = 1 to m
     lcs[1][0] = 0
     for (inj = 1 to n
       lcs[0][j] = lcs[1][j]  // элемент, который был в a[1][j], теперь в предыдущей строчке
       if (x[i] == y[j]) {
         lcs[1][j] = lcs[0][j - 1] + 1
       } else {
         if (lcs[0][j] >= lcs[1][j - 1]) {
           lcs[1][j] = lcs[0][j];
       } else {
           lcs[1][j] = lcs[1][j - 1];
       }
   // ответ — lcs[1][n]

}


int main() {



   return 0; 
}