#ifndef _FILE_S.O_
#define _FILE_S.O_
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

#endif
