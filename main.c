/**
 * \file main.c
 * \brief main
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "onegin.h"
#include "tests.h"

int main(){
    FILE *file = fopen("files/onigin.txt","rb");
    fseek(file, 0, SEEK_END);
    size_t file_bytes_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    size_t lines_count = count_lines(file);
    // create bufer
    char* sausage = (char*)calloc(sizeof(char),file_bytes_size);
    fread(sausage, sizeof(char),file_bytes_size, file);
    // create array for sorting p.1
    char** strings = (char**)calloc(sizeof(char*),lines_count);
    // devide sausage to strings
    devide_lines(sausage,  file_bytes_size);
    //filling array from buffer
    fill_array(strings, sausage, file_bytes_size);
    //sorting array
    printf("start sorting\n");
    mqsort(strings, lines_count, sizeof(*strings), compar);
    printf("complete sotring\n");
    //print sorting arrayk
    //error, fix this
    //print_array(strings, file_bytes_size);
    run_all_test();
    return 0;
}
