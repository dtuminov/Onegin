/**
 * @file tests.h
 * @author tuminov dmitry (d.tuminov1@outlook.com)
 * @brief includes test of functions
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef PROJECT_TESTS_H
#define PROJECT_TESTS_H

typedef enum{
    OK, 
    FAILED
} errors;

int run_all_test();
errors test_mystrcmp();
errors test_compar();
errors test_count_lines();
errors test_devide_lines();
errors test_fill_array();
errors test_print_array();

#endif