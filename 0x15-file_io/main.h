#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

<<<<<<< HEAD
#endif /*MAIN_H*/
=======
#endif
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976
