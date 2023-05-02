//program on merging of two array
#include <stdio.h>

int main() {
   int merge[10];
   int even[5] = {0, 2, 4, 6, 8};
   int odd[5]  = {1, 3, 5, 7, 9};

   int i, index, e_len, o_len;

   e_len = o_len = 5;

   index = 0;

   for(i = 0; i < e_len; i++) {
      merge[index] = even[i];
      index++;
   }

   for(i = 0; i< o_len; i++) {
      merge[index] = odd[i];
      index++;
   }

   printf("\nEven -> ");

   for(i = 0; i < e_len; i++)
      printf(" %d", even[i]);

   printf("\nOdd  -> ");

   for(i = 0; i < o_len; i++)
      printf(" %d", odd[i]);

   printf("\nMerge -> ");

   for(i = 0; i < 10; i++)
      printf(" %d", merge[i]);

   return 0;
}
