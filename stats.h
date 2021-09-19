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
 * @file <Add stats.h
 * @brief General file for 
 *
 * <Add Extended Description Here>
 *
 * @author Eliav Maas
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief - Prints statitics of array
 *
 * This function prints the statistics of an array given an unisgned char pointer
 * to the array and and unsized int of the size of the array. Statistics including
 * minimum, maximum, mean, and median.
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return void
 */
void print_statistics(unsigned char * array_ptr, unsigned int array_size);

/**
 * @brief - Prints array
 *
 * This function prints an array given an unisgned char pointer
 * to the array and and unsized int of the size of the array.
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return void
 */
void print_array(unsigned char * array_ptr, unsigned int array_size);

/**
 * @brief - Calculates median
 *
 * This function calculates the median of an array given an unisgned char pointer
 * to the array and and unsized int of the size of the array.
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return median Median of the array
 */
unsigned char find_median(unsigned char * array_ptr, unsigned int array_size);


/**
 * @brief - Calculates mean
 *
 * This function calculates the mean of an array given an unisgned char pointer
 * to the array and and unsized int of the size of the array.
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return mean Mean of the array
 */
unsigned char find_mean(unsigned char * array_ptr, unsigned int array_size);

/**
 * @brief - Calculates maximum
 *
 * This function calculates the maximum of an array given an unisgned char pointer
 * to the array and and unsized int of the size of the array.
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return max Maximum of the array
 */
unsigned char find_maximum(unsigned char * array_ptr, unsigned int array_size);

/**
 * @brief - Calculates Minumum
 *
 * This function calculates the minimum of an array given an unisgned char pointer
 * to the array and and unsized int of the size of the array.
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return min Minimum of the array
 */
unsigned char find_minimum(unsigned char * array_ptr, unsigned int array_size);

/**
 * @brief - Sorts array largest to smallest
 *
 * This function sorts the elements of an array from largest to smallest given an 
 * unisgned char pointer to the array and and unsized int of the size of the array.
 * An unsigned char pointer to an ordered array is returned
 *
 * @param array_ptr Pointer to array 
 * @param array_size Size of array 
 *
 * @return sorted_array_ptr pointer to ordered array
 */
unsigned char * sort_array(unsigned char * array_ptr, unsigned int array_size);


#endif /* __STATS_H__ */