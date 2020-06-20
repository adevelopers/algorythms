// Урок 6
#include <stdio.h>
#include <stdlib.h>
// Худяков Кирилл


// 1. Реализовать простейшую хеш-функцию. 
// На вход функции подается строка, на выходе сумма кодов символов.
unsigned int getHash(const char *str) {
    unsigned int hash = 0;
    for(; *str; str++)
        hash = (hash * 1664525) + (unsigned char)(*str) + 1020304050;
    return hash;
}



// 2. Переписать программу, реализующую двоичное дерево поиска.
//      а) Добавить в него обход дерева различными способами;
//      б) Реализовать поиск в двоичном дереве поиска;

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
} Node;




int main() {
    printf("task 1");
    char input[30] = "Algorythms2..";
    unsigned int hash = getHash(input);
    printf("Hash of string: %u", hash);


    printf("task 2");



    return 0;
}
