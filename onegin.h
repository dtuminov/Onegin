/**
 * @file onegin.h
 * @author tuminov dmitry (d.tuminov1@outlook.com)
 * @brief includes functions prototypes
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

int mystrcmp(const char *first, const char *second);
int compar (const void *pl1, const void* pl2);
size_t count_lines(FILE* file);
char*  devide_lines(char* sausage, size_t length);
char** fill_array(char** array, char* copied, size_t length);
void print_array(char** array, int lines_count);
void mqsort ( void * first, size_t number, size_t size, int ( * comparator ) ( const void *, const void * ) );

#endif