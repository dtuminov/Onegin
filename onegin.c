/**
 * \file onegin.c
 * \brief function realizations
*/
#include "onegin.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * \fn int mystrcmp(const char *first, const char *second)
 * \brief сравнивает данные функции строчки 
 * \details
 * \param first first given string
 * \param second second given string 
 * \return
*/

int mystrcmp(const char *first, const char *second){
    while (*first == *second && *first != '\0' && *second != '\0')
    {
        first++;
        second++; 
    }
    return *(first) - *(second);
}

/**
 * \fn int compar (const void *pl1, const void* pl2)
 * \brief the comparator 
 * \param pl1 first pointer
 * \param pl2 second pointer
*/

int compar (const void *pl1, const void* pl2){
    return mystrcmp(*(const char**)pl1,*(const char**)pl2);
}

/**
 * \fn size_t count_lines(FILE* file)
 * \brief count lines of given file
 * \param file given file
*/

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

 // coding task:
 // update commentaries
 // update onegin main function
 // create onegin main function 