/***********************************************************************
 * Module:
 *    Week 11, Sort Heap
 *    Brother JonesL, CS 235
 * Author:
 *    Group 13: Evan Harrison, Mark Mayeda, Edvaldo Melo, Michael Schmidt
 * Summary:
 *    This program will implement the Heap Sort
 ************************************************************************/

#ifndef SORT_HEAP_H
#define SORT_HEAP_H

#include "heap.h"

/*****************************************************
 * SORT HEAP
 * Perform the heap sort
 ****************************************************/
template <class T>
void sortHeap(T array[], int num)
{
   Heap <T> heap(array, num);
   heap.sort();
}


#endif // SORT_HEAP_H
