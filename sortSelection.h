/***********************************************************************
 * Module:
 *    Week 11, Sort Select
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name>
 * Summary:
 *    This program will implement the Selection Sort
 ************************************************************************/

#ifndef SORT_SELECTION_H
#define SORT_SELECTION_H

#include "swap.h"
/*****************************************************
 * SORT SELECTION
 * Perform the selection sort
 ****************************************************/
template <class T>
void sortSelection(T array[], int num)
{
  for(int iPivot = num - 1; iPivot > 0; iPivot--) {
    int iLargest = 0;
    for(int iCheck = 1; iCheck < iPivot; iCheck++) {
      if(array[iLargest] <= array[iCheck]) {
        iLargest = iCheck;
      }
      if(array[iLargest] > array[iPivot]) {
        swap(array, iLargest, iPivot);
      }
    }
  }
}


#endif // SORT_SELECTION_H
