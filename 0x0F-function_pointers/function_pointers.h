#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
