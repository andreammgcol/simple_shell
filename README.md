# Simple Shell
This project is the most important of the first trimester of Holberton School, is the consolidation of everything we learned in the quarter about System engineering & DevOps and Low-level programming & Algorithm.
Using C programming language, we develop our own Shell.

### Description
The shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

___
### Installation
You can install the simple shell cloning this repo:
```sh
$ git clone https://github.com/andreammgcol/simple_shell.git
```
Next you can compile the files with this command:
```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
finally you can run our Shell writing:
```sh
./hsh
```
### Output Examples
```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
($) ls -l
total 72
-rw-rw-r-- 1 vagrant vagrant  1054 Nov 26 01:42 builtin_commands.c
drwxrwxr-x 3 vagrant vagrant  4096 Nov 26 01:42 concepts
-rw-rw-r-- 1 vagrant vagrant   890 Nov 26 01:42 counters.c
-rw-rw-r-- 1 vagrant vagrant  1940 Nov 26 01:42 exec.c
-rw-rw-r-- 1 vagrant vagrant   372 Nov 26 01:42 frees.c
-rwxrwxr-x 1 vagrant vagrant 23170 Nov 26 01:43 hsh
-rw-rw-r-- 1 vagrant vagrant   876 Nov 26 01:42 main.c
-rw-rw-r-- 1 vagrant vagrant   812 Nov 26 01:41 README.md
-rw-rw-r-- 1 vagrant vagrant   304 Nov 26 01:42 remove_new_line.c
-rw-rw-r-- 1 vagrant vagrant   786 Nov 26 01:42 shell.h
-rw-rw-r-- 1 vagrant vagrant   253 Nov 26 01:42 signal_handler.c
-rw-rw-r-- 1 vagrant vagrant   606 Nov 26 01:42 tokenize.c
-rw-rw-r-- 1 vagrant vagrant  1041 Nov 26 01:42 utilities.c
($)
```
```sh
Holbertons-iMac-9:simple_shell holberton$ ./hsh 
($) pwd
/Users/holberton/simple_shell
```
```sh
($) cat signal_handler.c
#include "shell.h"

/**
  * signal_handler - Handles the signals
  * @sig_id: The identifier of the signal to handle
  *
  * Return: Nothing to returns
  */
void signal_handler(int sig_id)
{
	if (sig_id == SIGINT)
		write(STDOUT_FILENO, "\n($) ", 5);
}
($)
```

### Files

| File Name | Description |
| ------ | ------ |
| main.c | Executes programs, verify the locations and handles all functions. |
| _exit.c | The exit built-in function |
| _getenv.c |Function to gets an environment variable |
| _open_help.c |Function to print env and help |
| builtin_commands.c | Handle all built-ins |
| counters.c | function to count delims of string |
| exec.c | Executes programs, verify the locations and handles all functions |
| frees.c | functions to free memory |
| utilities.c | Contain 5 functions: _strcat (Concatenates two strings),  _strlen (Counts the length of a string), _strcmp (Compares two strings), _strdup (Duplicate a string), _atoi (Convert a string to an integer). |
| more_utilities.c | 2 more functions: _putchar ()writes the character c to stdout), _puts (Prints a string) |
| remove_new_line.c | function to remove a new line char from string |
| shell.h | Libraries and prototypes of functions |
| signal_handler.c | handle the Ctrl + C |
| tokenize.c | function to extract tokens from string |


### Built with
This project was built and development with:
- `C programming language:` is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, while a static type system prevents unintended operations.
- `VirtualBox:` VirtualBox is a general-purpose full virtualizer for x86 hardware, targeted at server, desktop and embedded use.
- `Vagrant:` Managing virtual machine environments.
- `Ubuntu 14.04 LTS:` Operating system tester and working.

- `GCC:` GNU Compiler version 4.8.4
# Authors
- Marlon Santiago Arboleda - Development and documentation
- Andrea Méndez Mesias - Development and documentation

