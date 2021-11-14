/**
 * \file main.c
 * \brief main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "onegin.h"

int main(){
    FILE *file = fopen("onigin.txt","rb");
    fseek(file, 0, SEEK_END);
    size_t file_bytes_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    size_t lines_count = count_lines(file);
    // create bufer
    char* sausage = (char*)calloc(sizeof(char),file_bytes_size);
    fread(sausage, sizeof(char),file_bytes_size, file);
    // create array for sorting p.1
    char** strings = (char**)calloc(sizeof(char*),lines_count);
    // cteate array for sort p.2
    for (size_t i = 0; i < lines_count; i++)
    {
        strings[i] = (char*)calloc(sizeof(char), 300);
    }
    //change '\n' to '\0' to iteration
    for (size_t i = 0; i < file_bytes_size; ++i)
    {
        if (sausage[i] == '\n') {
            sausage[i] = '\0';
        }
    }
    //
    for (size_t i = 0; i < file_bytes_size; i++)
    {
        printf("%c\n", sausage[i]);
    }
    //
    int sp_iter = 0;
    // filling array
    for (size_t i = 0; i < lines_count;)
    {
        for (size_t j = 0; j < file_bytes_size;sp_iter++)
        {
            if ('\0' == sausage[j]) {
                j = 0;
                i++; 
            }
            strings[i][j++] = sausage[sp_iter];
            printf("%c",sausage[sp_iter]);
        } 
    }
    return 0;
}