#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
int _putchar(char c);
#endif
