#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(){
    FILE *file = fopen("txt_file.txt","r");
    size_t lines_count = count_lines(file);
    char** strings = (char**)calloc(sizeof(*strings),lines_count);
    char buf[1024] = "";
    for (size_t i = 0; i < lines_count; i++)
    {
        fscanf(file, "%s", buf);
        strings[i] = strdup(buf);
    }
    printf("Befor sorting:\n");
    for (size_t y = 0; y < lines_count; y++){
        printf("%s\n",strings[y]);
    }
    qsort(strings, sizeof(*strings), lines_count, compar);
    printf("after sorting:");
    for (size_t y = 0; y < lines_count; y++){
        printf("%s\n",strings[y]);
    }
    return 0;
}