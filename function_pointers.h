#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));

#endif
