#ifndef _SHELL_
#define _SHELL_

#include <stdlib.h>
#include <unistd.h>

char *_strcat(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _atoi(char *s);
int _putchar(char c);
void _puts(char *str);
int count_input(char *str);

#endif
