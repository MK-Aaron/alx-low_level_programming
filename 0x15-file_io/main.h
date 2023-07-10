#ifndef HEADER_FILE
#define HEADER_FILE

/* C-Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
