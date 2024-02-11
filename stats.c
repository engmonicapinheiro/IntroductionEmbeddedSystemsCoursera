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
 * @author <Monica Pinheiro>
 * @date <February 2024>
 *
 */

#include <stdio.h>
#include <string.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() 
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                                               

  /* Other Variable Declarations Go Here */
  struct statistics testStatistics;
  unsigned char* sortedArray;
 

  /* Statistics and Printing Functions Go Here */
  
  printf("The raw unsorted array is: \n");
  print_array(test, SIZE);
  
  printf("\nThe sorted array is: \n");
  sortedArray = sort_array(test, SIZE);
  print_array(sortedArray, SIZE);
  printf("\n");
    
  /* calculate the minimum value of the array */
  testStatistics.minimumValue = find_minimum(test, SIZE);
  
  /* calculate the maximum value of the array */
  testStatistics.maximumValue = find_maximum(test, SIZE);
  
 /* calculate the median value of the array */
  testStatistics.median = find_median(sortedArray, SIZE);

  /* calculate the mean */
  testStatistics.mean = find_mean(test, SIZE);
  
  /* print the four statistical parameters of the dataset */
  print_statistics(testStatistics);
}

/* Add other Implementation File Code Here */

void print_statistics(struct statistics testStatistics)
{
  printf("\nThe minimum value in the array is %d\n", testStatistics.minimumValue);
  printf("The maximum value in the array is %d\n", testStatistics.maximumValue);
  printf("The mean in the array is %d\n", testStatistics.mean);
  printf("The median in the array is %d\n", testStatistics.median);
}


void print_array(unsigned char* array, unsigned int length)
{    
	if(array == NULL)
	{
		printf("ERROR: The array is empty or has invalid length.");
		return;
	}


	for(unsigned int i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	
}

unsigned char find_minimum(unsigned char *ptr, int numElements)
{
	if(ptr == NULL)
	{
		printf("ERROR: The array is empty or has invalid length.");
		return -1;
	}
	
	unsigned char minimum = ptr[0];
	
	for(unsigned int i = 0; i < numElements; i++)
	{
	   if (ptr[i] < minimum)
	   {
	     minimum = ptr[i];     
	   }
	}
	
	return minimum;
}

unsigned char find_maximum(unsigned char* array, unsigned int length)
{
	if(array == NULL)
	{
		printf("ERROR: The array is empty or has invalid length.");
		return -1;
	}

   unsigned char maximum = array[0];

   for(unsigned int i = 0; i < length; i++)
   {
     if (array[i] > maximum)
     {
       maximum = array[i];     
     }
   }

   return maximum;
}

unsigned char find_mean(unsigned char* array, unsigned int length)
{
	if(array == NULL)
	{
		printf("ERROR: The array is empty or has invalid length.");
		return -1;
	}
	
	unsigned int sum = 0;
	unsigned char result = 0;
	
	for(unsigned int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	
	result = sum / length;
	
	return result;
}

unsigned char find_median(unsigned char* array, unsigned int length)
{
	if(array == NULL)
	{
		printf("ERROR: The array is empty or has invalid length.");
		return -1;
	}
	
	unsigned char result;
	
	if(length % 2 == 0)
	{
	  result = (array[length/2 - 1] + array[length/2])/ 2.0;
	}	
	else
	{
	   result = array[length/2 + 1];
	}
		
	return result;
}

void swap(unsigned char* ptrx, unsigned char* ptry)
{
	unsigned char temp = *ptrx;
	*ptrx = *ptry;
	*ptry = temp;
}

unsigned char* sort_array(unsigned char* array, unsigned int length)
{
	for(unsigned char i = 0; i < length - 1; i++)
	{
	  for(unsigned char j = 0; j < length - 1; j++)
	  {
	  	if(array[j] < array[j+1])
	  	{
	  	  swap(&array[j], &array[j+1]);
	  	}
	  }
	}
	
	return array;
}


