// Урок 2
// Худяков Кирилл

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "assert.h"
#include "foreach.h"
#include "stack.h"

struct Input {
    int a;
    int b;
    int c;
    int d;
};


int maximum(int a, int b) {
    return a < b ? b : a;
}


// STACK
struct Stack stack;
void stackPush(int a) {
    push(&stack, a);
}


int recursiveMax(int max1) {
    if (stack.top == -1) {
        return max1;
    } 
    int a1 = pop(&stack);
    return recursiveMax(maximum(a1, max1)); 
}

int main() {
    
    stackInit(&stack);
    stackPush(13);
    stackPush(57);
    stackPush(12);
    stackPush(9);
    stackPush(3);
    stackPush(1);

    
    
        int v = recursiveMax(19);
        printf("%d\n", v);
    
    
}