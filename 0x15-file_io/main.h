#define MAIN_H
#ifndef MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcnt1.h>


int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
