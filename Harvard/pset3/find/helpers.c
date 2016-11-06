/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

#include <stdio.h>

void printArrayItems(int values[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", i, values[i]);
    }
}

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 0) {
        return false;
    }
    //linear search
    // for (int i = 0; i < n; i++) {
    //     if (value == values[i]) {
    //         return true;
    //     }
    // }
    
    //binary search
    // sort(values, n);
    
    printArrayItems(values, n);
    
    int min_index = 0;
    int max_index = n - 1;
    while (min_index <= max_index) {
        int middle_index =  ( min_index + max_index ) / 2;
        if (value < values[middle_index] ) {
            max_index = middle_index - 1;
        } else if (value > values[middle_index]) {
            min_index = middle_index + 1;
        } else {
            printf("index: %d\n", middle_index);
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    //Selection sort
    for (int i = 0; i < n; i++) {
        int min_value_index = i + 1;
        for (int j = i + 1; j < n; j++) {
            if (values[j] < values[min_value_index]) {
                min_value_index = j;
            }
        }
        if (values[i] > values[min_value_index] && min_value_index < n) {
            int temp = values[i];
            values[i] = values[min_value_index];
            values[min_value_index] = temp;
        }
    }
    //TODO: Insertion sort
    
    // printArrayItems(values, n);
    return;
}