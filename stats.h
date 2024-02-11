/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Monica Pinheiro
 * @date January 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

struct statistics
{
  unsigned char minimumValue;
  unsigned char maximumValue;
  unsigned char median;
  unsigned char mean;
};


/**
 * @brief <prints the statistical calculations done in this project>
 *
 * Prints the statistical parameters from the dataset
 * prints the minimum, the maximum, the mean and the median.
 *
 * @return void
 */
void print_statistics(struct statistics testStatistics);


/**
 * @brief Prints the array
 *
 * <Given an array of data and a length, prints the array to the screen>
 *
 * @param array   the array to be printed
 * @param length  the length of the array
 *
 * @return void
 */
void print_array(unsigned char* array, unsigned int length);


/**
 * @brief <Find the midpoint value of a dataset>
 *
 * <Add Extended Description Here>
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the median of the elements of the array
 */
unsigned char find_median(unsigned char* array, unsigned int length);

/**
 * @brief Calculates the mean from the array
 *
 * <Given an array of data and a length, returns the mean>
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the median of the elements of the array
 */
unsigned char find_mean(unsigned char* array, unsigned int length);

/**
 * @brief Calculates the maximum from the array
 *
 * <Given an array of data and a length, returns the maximum>
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the median of the elements of the array
 */
unsigned char find_maximum(unsigned char* array, unsigned int length);

/**
 * @brief calculates the minimum element from a dataset (the given array)y
 *
 * <This function takes a given array and finds its minimum.>
 *
 * @param <ptr> <the dataset>
 * @param numElements the total number of elements
 *
 * @return an unsigned char that is the minimum value of the given array
 */
unsigned char find_minimum(unsigned char *ptr, int numElements);


/**
 * @brief sorts the array using the Bubblesort algorithm
 *
 * Given an array of data and a length, sorts the array from largest to smallest
 * the zeroth element should be the largest value, and the last element (n-1) should
 * be the smallest value
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the sorted the array
 */
unsigned char* sort_array(unsigned char* array, unsigned int length);

/**
 * @brief <swap two values>
 *
 * <function to swap two values. To be used exclusively at the Bubblesort function.>
 *
 * @param <ptrx> <first value to be swapped>
 * @param <ptry> <second value to be swapped>
 *
 * @return <Add Return Informaiton here>
 */
void swap(unsigned char* ptrx, unsigned char* ptry);


#endif /* __STATS_H__ */
