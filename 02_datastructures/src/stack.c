#include <stdlib.h>
#include "stack.h"

void stack_init(Stack* s)
{
    s->list = (List*)malloc(sizeof(List));
    list_init(s->list);
}

void stack_print(Stack* s)
{
    list_print(s->list);
}

bool stack_empty(Stack* s)
{
    return list_empty(s->list);
}

void stack_push(Stack* s, char value)
{
    // TODO: �bung 2.3 (1a)
}

char stack_top(Stack* s)
{
    char value = '\0';
    // TODO: �bung 2.3 (1a)
    return value;
}

char stack_pop(Stack* q)
{
    // TODO: �bung 2.3 (1a)
    return '\0';
}