#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcmp(const char *first, const char *second){
    while (*first == *second && *first != '\0' && *second != '\0')
    {
        first++;
        second++; 
    }
    return *(first) - *(second);
}

int compar (const void *pl1, const void* pl2){
    return mystrcmp(*(const char**)pl1,*(const char**)pl2);
}

size_t count_lines(FILE* file){
    int lines_quantity = 1;
    while (! feof(file)) {
        if (fgetc(file) == '\n') {
            lines_quantity++;
        }
    } 
    fseek(file, 0, SEEK_SET);
    return lines_quantity;
 }