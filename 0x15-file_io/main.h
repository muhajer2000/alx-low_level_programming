#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd>
int _putchar(char C);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
