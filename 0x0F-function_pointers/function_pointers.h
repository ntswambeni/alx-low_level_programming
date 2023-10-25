#ifndef HEADER_FILES
#define HEADER_FILES

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
