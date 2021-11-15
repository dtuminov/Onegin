/**
 * @file tests.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "tests.h"
#include "onegin.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int run_all_test(){
    printf("Startin` testing\n");
    assert(test_mystrcmp() == OK);
    assert(test_compar() == OK);
    assert(test_count_lines() == OK);
    assert(test_devide_lines() == OK);
    //assert(test_fill_array() == OK);
    printf("All test runned successfully\n");
    return 0;
}
// realization test_mystrcmp
errors test_mystrcmp(){
    printf("test_mystrcmp start working\n");
    char test_string1[] = "Hello";
    char test_string2[] = "Hello";
    // Program performance test
    if (mystrcmp(test_string1, test_string2) != 0) {
        return FAILED;
    }
    char test_string3[] = "Hi";
    // Wrong performance test
    if (mystrcmp(test_string1, test_string3) == 0) {
        return FAILED;
    }
    printf("test_mystrcmp finish working\n");
    return OK;
}
// realization test_compar
errors test_compar(){
    printf("test_compar start working\n");
    /* code
    char str1[] = "abcde";
    char str2[] = "abcde";
    if (compar(str1, str2) != 0)
    {
        return FAILED;
    }
    */
    printf("test_compar finish working\n");
    return OK;
}
// realization test_count_lines
errors test_count_lines(){
    printf("test_count_lines start working\n");
    // code
    //FILE *file = fopen("tes_file.txt","r");
   // if (count_lines(file) != 0)
    //{
   //     return FAILED;
   // }
   // fclose(file);
    printf("test_count_lines finish working\n");
    return OK;
}
// realization test_devide_lines
errors test_devide_lines(){
    printf("test_devide_lines start working\n");
    // test of not NULL buf
    char sausage[] = "hello\nworld\n" ;
    devide_lines(sausage, strlen(sausage));
    if (mystrcmp(sausage+6, "world") != 0  || mystrcmp(sausage, "hello"))
    {
        printf("Warning in function test_devide_lines:%d\n",__LINE__);
        return FAILED;
    }
    // test of NULL buf
    char* sausage2 = NULL;
    if (devide_lines(sausage2, 0) != NULL)
    {
        printf("Warning in function test_devide_lines:%d\n",__LINE__);
        return FAILED;
    }
    printf("test_devide_lines finish working\n");
    return OK;
}