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
#include <assert.h>
#include <stdio.h>

int run_all_test(){
    printf("Startin` testing\n");
    assert(test_mystrcmp() == OK);
    assert(test_compar() == OK);
    assert(test_count_lines() == OK);
    assert(test_devide_lines() == OK);
    assert(test_fill_array() == OK);
    printf("All test runned successfully\n");
    return 0;
}
// realization test_mystrcmp
errors test_mystrcmp(){
    printf("test_mystrcmp start working\n");
    // code
    printf("test_mystrcmp finish working\n");
    return OK;
}
// realization test_compar
errors test_compar(){
    printf("test_compar start working\n");
    // code
    printf("test_compar finish working\n");
    return OK;
}
// realization test_count_lines
errors test_count_lines(){
    printf("test_count_lines start working\n");
    // code
    printf("test_count_lines finish working\n");
    return OK;
}
// realization test_devide_lines
errors test_devide_lines(){
    printf("test_devide_lines start working\n");
    // code
    printf("test_devide_lines finish working\n");
    return OK;
}
// realization test_fill_array
errors test_fill_array(){
    printf("test_fill_array start working\n");
    // code

    printf("test_fill_array finish working\n");
    return OK;
}