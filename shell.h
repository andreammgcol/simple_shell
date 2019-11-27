#ifndef _SHELL_
#define _SHELL_

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

extern char **environ;

char *_strcat(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _atoi(char *s);
int _putchar(char c);
void _puts(char *str);
int count_input(char *str);
int count_delims(char *str, char *del);
char *remove_new_line(char *str);
void signal_handler(int sig_id);
void _open_help(void);
void _print_env(void);

#endif
