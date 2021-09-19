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
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Eliav Maas
 * @date <Add date >
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
  unsigned int size = SIZE
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
int find_mean(unsigned char * array_ptr, unsigned int * array_size){
  int i;
  unsigned char average;
  if ( array_ptr == NULL){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  for(i = 0; i < array_size; i++){
    average += *array_ptr;
    array_ptr++;
  }
  average = (average / array_size);
  return (unsigned char) average
}
int find_median(unsigned char * array_ptr, unsigned int * array_size){
  int i;
  unsigned char median;
  if ( array_ptr == NULL){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
//   for(i = 0; i < array_size; i++){
//     average += *array_ptr;
//     array_ptr++;
//   }
 
  return (unsigned char) median
}
int find_maximimum(unsigned char * array_ptr, unsigned int * array_size){
  int i;
  unsigned char max;
  if ( array_ptr == NULL){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  for(i = 0; i < array_size; i++){
    average += *array_ptr;
    array_ptr++;
  }
 
  return (unsigned char) median
}