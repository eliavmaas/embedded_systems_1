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
  /* Other Variable Declarations Go Here */
  unsigned int size = SIZE;
  
  /* Statistics and Printing Functions Go Here */
  print_array(test, size);
  }
// Required Functions
void print_statistics(unsigned char * array_ptr, unsigned int array_size){

}
void print_array(unsigned char * array_ptr, unsigned int array_size){
  int i;
  for(i = 0; i < array_size; i++){ 
    printf("%d", array_ptr[i]);
  }
}
unsigned char find_median(unsigned char * array_ptr, unsigned int array_size){
int i;
unsigned char median = 0;
if ( array_ptr == 0){
  return 0;
}

if ( array_size <= 0 ) {
  array_size = 1;
}
  
//   for(i = 0; i < array_size; i++){
//     average += *array_ptr;
//     array_ptr++;
//   }

  return (unsigned char) median;
}
unsigned char find_mean(unsigned char * array_ptr, unsigned int array_size){
  int i;
  unsigned char average;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  for(i = 0; i < array_size; i++){
    average += *array_ptr;
    array_ptr++;
  }
  average = (average / (unsigned char) array_size);
  return (unsigned char) average;
}
unsigned char find_maximimum(unsigned char * array_ptr, unsigned int array_size){
  int i;
  unsigned char max;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  // for(i = 0; i < array_size; i++){
  //   average += *array_ptr;
  //   array_ptr++;
  // }

  return (unsigned char) max;
}
unsigned char find_minimum(unsigned char * array_ptr, unsigned int array_size){
  int i;
  unsigned char min;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  // for(i = 0; i < array_size; i++){
  //   average += *array_ptr;
  //   array_ptr++;
  // }

  return (unsigned char) min;
}
unsigned char * sort_array(unsigned char * array_ptr, unsigned int array_size){
  int i;
  unsigned char * sorted_array_ptr;
  if ( array_ptr == 0){
    return 0;
  }
  
  if ( array_size <= 0 ) {
    array_size = 1;
  }
  
  // for(i = 0; i < array_size; i++){
  //   average += *array_ptr;
  //   array_ptr++;
  // }

  return sorted_array_ptr;
}
// Other Useful Functions

/* Add other Implementation File Code Here */

