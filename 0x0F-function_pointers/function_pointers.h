#ifndef FPOINTERS_H
#define FPOINTERS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *s));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int main(int argc, char *argv[]);


#endif
