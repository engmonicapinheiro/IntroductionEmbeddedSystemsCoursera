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
 * @author Monic Pinheiro
 * @date January 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief calculates the minimum element from a dataset (the given array)
 *
 * This function takes a given array and finds its minimum.
 *
 * @param ptr the first element of the array to be processed
 * @param numElements the total number of elements
 *
 * @return an unsigned char that is the minimum value of the given array
 */
unsigned char find_minimum(unsigned char *ptr, int numElements);



/**
 * @brief <Add Brief Description of Function Here>
 *
 * Prints the statistical parameters from the dataset
 * prints the minimum, the maximum, the mean and the median.
 *
 * @return void
 */
void print_statistics(void);


/**
 * @brief Prints the array
 *
 * <Add Extended Description Here>
 *
 * @param array   the array to be printed
 * @param length  the length of the array
 *
 * @return void
 */
void print_array(unsigned char* array, unsigned int length);


/**
 * @brief <Add Brief Description of Function Here>
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
 * <Add Extended Description Here>
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
 * <Add Extended Description Here>
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the median of the elements of the array
 */
unsigned char find_maximum(unsigned char* array, unsigned int length);

/**
 * @brief Calculates the minimum from the array
 *
 * <Add Extended Description Here>
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the median of the elements of the array
 */
//unsigned char find_minimum(unsigned char* array, unsigned int length);

/**
 * @brief Calculates the minimum from the array
 *
 * Given an array of data and a length, sorts the array from largest to smallest
 * the zeroth element should be the largest value, and the last element (n-1) should
 * be the smallest value
 *
 * @param array  the dataset
 * @param length the size of the array
 *
 * @return the median of the elements of the array
 */
unsigned char* sort_array(unsigned char* array, unsigned int length);




//template for the functions

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
