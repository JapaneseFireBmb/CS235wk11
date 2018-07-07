/***********************************************************************
 * Module:
 *    Week 11, Sort Quick
 *    Brother JonesL, CS 235
 * Author:
 *    Group 13: Evan Harrison, Mark Mayeda, Edvaldo Melo, Michael Schmidt
 *    Algorithm pseudocode referenced from Data Structures p. 299
 * Summary:
 *    This program will implement the Quick Sort
 ************************************************************************/

#ifndef SORT_QUICK_H
#define SORT_QUICK_H

/*****************************************************
 * SORT QUICK
 * Perform the quick sort
 ****************************************************/
template <class T>
void sortQuick(T array[], int num)
{
   if (num <= 1)
      return;
   int iEnd = num - 1;
   int iDown = num - 1;
   int iUp = 0;
   T pivotValue = array[iEnd / 2];

   while (iUp <= iDown)
   {
      while (iUp <= iEnd && pivotValue > array[iUp])
         ++iUp;
      while (iDown >= 0 && array[iDown] > pivotValue)
         --iDown;
      if (iUp <= iDown)
         swap(array, iUp++, iDown--);
   }

   sortQuick(array, iUp);
   sortQuick(array + iUp, iEnd - iUp + 1);
      
}


#endif // SORT_QUICK_H
