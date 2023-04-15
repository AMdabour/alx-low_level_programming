#ifndef MAIN_h
#define MAIN_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char **argv);
char *big_multiply(char *s1, char *s2);
int _strlen(char *s);
int _isdigit(int c);

#endif
