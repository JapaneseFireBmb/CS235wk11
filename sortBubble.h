/***********************************************************************
 * Module:
 *    Week 11, Sort Bubble
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Bubble Sort
 ************************************************************************/

#ifndef SORT_BUBBLE_H
#define SORT_BUBBLE_H

#include "swap.h"
/*****************************************************
 * SORT BUBBLE
 * Perform the bubble sort
 ****************************************************/
template <class T>
void sortBubble(T array[], int num)
{
  T temp;
  bool swapped;
  for(int iPivot = num - 1; iPivot > 0; iPivot--) {
    swapped = false;
    for(int iCheck = 0; iCheck < iPivot; iCheck++) {
      if(array[iCheck] > array[iCheck + 1]) {
        swap(array, iCheck, iCheck+1);
        swapped = true;
      }
    }
  if(!swapped)
    return;
  }
}


#endif // SORT_BUBBLE_H
