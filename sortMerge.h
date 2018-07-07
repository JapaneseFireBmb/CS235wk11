/***********************************************************************
 * Module:
 *    Week 11, Sort Merge
 *    Brother JonesL, CS 235
 * Author:
 *    Group 13: Evan Harrison, Mark Mayeda, Edvaldo Melo, Michael Schmidt
 *    Algorithm pseudocode referenced from Data Structures pp. 294-295
 * Summary:
 *    This program will implement the Merge Sort
 ************************************************************************/

#ifndef SORT_MERGE_H
#define SORT_MERGE_H

/************************************************************************
 * MERGE
 * Combines two source sub-arrays into one sorted array, which is copied
 * into the destination array
 ************************************************************************/
template <class T>
void merge(T * destination, T * source1, int size1, T * source2, int size2)
{
   int i1 = 0;
   int i2 = 0;

   for (int iDestination = 0; iDestination < size1 + size2; iDestination++)
   {
      if (i1 < size1 && (i2 == size2 || source1[i1] < source2[i2]))
         destination[iDestination] = source1[i1++];
      else
         destination[iDestination] = source2[i2++];
   }
}

      

/*****************************************************
 * SORT MERGE
 * Perform the merge sort
 ****************************************************/
template <class T>
void sortMerge(T array[], int num) throw (const char *)
{
   bool done;
   int iBegin1;
   int iEnd1;
   int iBegin2;
   int iEnd2;
   int numLoops;

   T * temp;
   T * source = array;
   T * destination;
   try
   {
      destination = new T[num];
   }
   catch(std::bad_alloc)
   {
      throw "ERROR: Unable to allocate destination array for Merge Sort";
   }

   do
   {
      iBegin1 = 0;
      numLoops = 0;
      done = false;
      while (!done)
      {
         ++numLoops;
         iEnd1 = iBegin1;
         while (iEnd1 < num - 1 && source[iEnd1] <= source[iEnd1 + 1])
            ++iEnd1;

         iBegin2 = iEnd1 + 1;

         iEnd2 = iBegin2;
         while (iEnd2 < num && source[iEnd2] <= source[iEnd2 + 1])
            ++iEnd2;

         if (iBegin2 < num)
         {
            merge(destination + iBegin1, source + iBegin1, iEnd1 - iBegin1 + 1,
                  source + iBegin2, iEnd2 - iBegin2 + 1);
         }
         else 
         {
            for (int i = iBegin1; i < num; i++)
               destination[i] = source[i];
            done = true;
         }
         
         iBegin1 = iEnd2 + 1;
         if (iBegin1 > num - 1)
            done = true;
      }

      temp = source;
      source = destination;
      destination = temp;
   }
   while (numLoops > 1);

   if (array != source)
      for (int i = 0; i < num; i++)
         array[i] = source[i];
     
}


#endif // SORT_MERGE_H
