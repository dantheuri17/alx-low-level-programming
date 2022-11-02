#include<stdio.h>
#include "search_algos.h"

/**
*
*
*/


int binary_search (int *array, size_t size, int value)
{
  int low, high, i;
  
  low = 0; 
  high = size -1; 
    
  while (low <= high)
  {
      int mid = low + (high - low) / 2;

      printf("Searching in array: ");
      for (i = low; i <= high; i++)
        {
          printf("%d", array[i]);
          if (i != high)
            printf(", ");
          else
            printf("\n");
        }

      if (array[mid] == value) return mid;

      if (array[mid] < value) low = mid + 1;
      else high = mid - 1; 

    }
  return -1; 


}
