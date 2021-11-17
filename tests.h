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

#define print_warning printf("Warning in function %s:%d\n", __FUNCTION__ ,__LINE__);

typedef enum{
    OK, 
    FAILED
} errors;

int run_all_test();
errors test_mystrcmp();
errors test_compar();
errors test_count_lines();
errors test_devide_lines();
errors test_mqsort();

#endif