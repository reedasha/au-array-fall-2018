#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <assert.h>

#include "au_array.h"

void test_au_array_create()
{
    assert(false);
}

void test_au_array_create_of_length()
{
    assert(false);
}

void test_au_array_create_with_array()
{
    assert(false);
}

void test_au_array_create_with_buffer()
{
    assert(false);
}

void test_au_array_free()
{
    assert(false);
}

void test_au_array_free_with_elements()
{
    assert(false);
}

void test_au_array_free_with_element_handler()
{
    assert(false);
}

void test_au_array_is_empty()
{
    assert(false);
}

void test_au_array_length()
{
    assert(false);
}

void test_au_array_size()
{
    au_array array;
    array.element_size = sizeof(int);
    array.length = 50;
    array.elements = malloc(sizeof(int) * array.length);

    assert(au_array_size(&array) == (50 * sizeof(int)));
    printf("Test array size passed\n");   
}

void test_au_array_element_size()
{
    assert(false);
}

void test_au_array_first()
{
     au_array array;
    array.element_size = sizeof(int);
    array.length = 5;
    array.elements = malloc(sizeof(int) * array.length);
    int *a = array.elements;
    *a = 1;

    int *n = au_array_first(&array);
    assert(*n == 1);
    printf("Get first element of array passed\n");
}

void test_au_array_last()
{
    assert(false);
}

void test_au_array_get()
{
    assert(false);
}

int main(int argc, char **argv)
{
    // test_au_array_create();
    // test_au_array_create_of_length();
    // test_au_array_create_with_array();
    // test_au_array_create_with_buffer();

    // test_au_array_free();
    // test_au_array_free_with_elements();
    // test_au_array_free_with_element_handler();

    // test_au_array_is_empty();
    // test_au_array_length();
    test_au_array_size();
    // test_au_array_element_size();

    test_au_array_first();
    // test_au_array_last();
    // test_au_array_get();

    return 0;
}

