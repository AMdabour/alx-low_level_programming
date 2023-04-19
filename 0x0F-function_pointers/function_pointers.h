#ifndef FPOINTERS_H
#define FPOINTERS_H

#include <stdio.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *s));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif
