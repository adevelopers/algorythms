#include <stdio.h>
#define STACK_SIZE 1000

#define T int
 
struct Stack {
    int top; // индекс верхнего элемента
    T values[STACK_SIZE];
} Stack;


void push(struct Stack *stack, T value) {
    stack->top++;
    stack->values[stack->top] = value; 
};

T pop(struct Stack *stack) {
    if (stack->top != -1) 
        return stack->values[stack->top--];
    else {
        return -1;   
    }
};

void stackInit(struct Stack *stack) {
    stack->top = -1;
};