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




int main() {
    char input[30] = "Algorythms2..";
    unsigned int hash = getHash(input);
    printf("%u", hash);

    return 0;
}

// 2. Переписать программу, реализующую двоичное дерево поиска.
//      а) Добавить в него обход дерева различными способами;
//      б) Реализовать поиск в двоичном дереве поиска;
