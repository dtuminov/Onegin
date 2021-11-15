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
 * \details
 * \param pl1 first pointer
 * \param pl2 second pointer
 * \return the greater of the numbers
*/

int compar (const void *pl1, const void* pl2){
    return mystrcmp(*(const char**)pl1,*(const char**)pl2);
}

/**
 * \fn size_t count_lines(FILE* file)
 * \brief count lines of given file
 * \details counts the number of lines in this file, provided that \n is present at the end of the file
 * \param file given file
 * \return count lines of file
*/

size_t count_lines(FILE* file){ 
    if (file == NULL) {
        printf("Ошибка открытия файла");
        return 0;
    }
    else{
        int lines_quantity = 0;
        while (! feof(file)) {
            if (fgetc(file) == '\n') {
                lines_quantity++;
            }
        } 
        fseek(file, 0, SEEK_SET);
        return lines_quantity;
    }
 }

/**
 * \fn size_t count_lines(FILE* file)
 * \brief count lines of given file
 * \details
 * \param file given file
 * \return return the final array
*/

char*  devide_lines(char* sausage, size_t length){
    if(sausage == NULL){
        return NULL;
    }
    //change '\n' to '\0' to iteration
    for (size_t i = 0; i < length; ++i)
    {
        if (sausage[i] == '\n') 
        {
            sausage[i] = '\0';
        }
    }
    return sausage;
}

/**
 * \fn size_t count_lines(FILE* file)
 * \brief count lines of given file
 * \details
 * \param file given file
 * \return return the final array
*/

char** fill_array(char** array, char* copied, size_t length){
    // cteate array for sort p.2
    int i = 0, sp_iter = 0; char* cur_str = copied;
    while (i < length - 1) {
        if ('\0' == copied[i]) {
            array[sp_iter++] = cur_str;
            cur_str = &(copied[i+1]);
        }
        i++; 
    }
    array[sp_iter] = cur_str;
    return array;
}

/**
 * \fn size_t count_lines(FILE* file)
 * \brief count lines of given file
 * \details
 * \param file given file
*/

void print_array(char** array, int lines_count){
    for (size_t i = 0; i < lines_count; i++)
    {
        printf("%s\n", array[i]);
    }
    printf("end");
    return;
}