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
 * @file stats.c
 * @brief First assignment of Introduction to Embedded Systems Software and Development Environments  Coursera course
 *
 * This program takes in an array and orders the elemets of the array in decending order as well as displays
 * some information regarding the statistics of the elements of the array (median, mean, maximum, and minimum).
 *
 * @author Eliav Maas
 * @date September 19, 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned int size = SIZE;
  /* Other Variable Declarations Go Here */
  
  
  /* Statistics and Printing Functions Go Here */
  printf("Original Array:\n");
  print_array(test, size);
  // printf("hello\n");
  // printf("%d", test[1]<test[2]);
  // printf("\nhello");
  sort_array(test, size);
  printf("Sorted Array:\n");
  print_array(test, size);
  print_statistics(test, size);
  }


// Required Functions
void print_statistics(unsigned char * array_ptr, unsigned int array_size){
  // unsigned char median = find_median(array_ptr, array_size);
  unsigned char mean = find_mean(array_ptr, array_size);
  unsigned char median = find_median(array_ptr, array_size);
  unsigned char min = find_minimum(array_ptr, array_size);
  unsigned char max = find_maximum(array_ptr, array_size);
  printf("~~~~~Statistics Report~~~~~\n");
  printf("Mean:%d\n", median);
  printf("Mean:%d\n", mean);
  printf("Minimum:%d\n", min);
  printf("Maximum:%d\n", max);
}
void print_array(unsigned char * array_ptr, unsigned int array_size){
  int i;
  int counter = 0;
  // printf("The Array is:\n");
  printf("[");
  for(i = 0; i < array_size-1; i++){ 
    printf("%d, ", array_ptr[i]);
  }
  printf("%d", array_ptr[i]);
  printf("]\n");
}
unsigned char find_median(unsigned char * array_ptr, unsigned int array_size){
int i, index, temp;
unsigned char median = 0;
if ( array_ptr == 0){
  return 0;
}

if ( array_size <= 0 ) {
  array_size = 1;
}
  
  if ( array_size % 2 == 0 ){
    index = (array_size + 1) / 2 - 1;
    temp = ((int) array_ptr[index] + (int) array_ptr[index+1])/2;
    median = (unsigned char) temp;
  }
  else{
    index = (array_size + 1) / 2 - 1;
    median = array_ptr[index];
  }

  return (unsigned char) median;
}
unsigned char find_mean(unsigned char * array_ptr, unsigned int array_size){
  int i;
  // unsigned char average=0;
  int average=0;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  for(i = 0; i < array_size; i++){
    average += (int)*array_ptr;
    array_ptr++;
  }
  average = (unsigned char) (average / array_size);
  return (unsigned char) average;
}
unsigned char find_maximum(unsigned char * array_ptr, unsigned int array_size){
  int i;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  sort_array(array_ptr, array_size);
  return (unsigned char) array_ptr[0];
}
unsigned char find_minimum(unsigned char * array_ptr, unsigned int array_size){
  int i;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }

  sort_array(array_ptr, array_size);
  return (unsigned char) array_ptr[array_size-1];
}
void sort_array(unsigned char * array_ptr, unsigned int array_size){
  int i, j;
  unsigned char temp;
  
  for(i = 0; i < array_size; i++){
    for(j=i+1; j < array_size; j++){
      if(array_ptr[j] > array_ptr[i]){
        temp = array_ptr[i];
        array_ptr[i] = array_ptr[j];
        array_ptr[j] = temp;
      }
    }
  }
}
// Other Useful Functions

/* Add other Implementation File Code Here */

