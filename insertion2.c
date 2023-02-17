#include<stdio.h>

int main()
{
   int size,min;
  
   printf("Enter The Size Of Array You Want: ");
   scanf("%d",&size);
   int nums[size];
  
   printf("Enter The Numbers OF Array:\n\n");
   
   for(int i=0;i<size;i++)
   {
      printf("Enter The Number %d: ",i+1);
      scanf("%d",&nums[i]);
   }


   for(int j=1;j<size;j++)
   {
       int key = nums[j]; //For Getting The Key
       int i = j - 1; 
      
      while(i>=0 && nums[i]>key)
      {
      	nums[i+1] = nums[i];
      	i=i-1;
      	nums[i+1]= key;
      }
   }

   
   printf("\nInsertion Sorted Array:");
   
   for(int i=0;i<size;i++)
   {
   printf("%d  ",nums[i]);
   }
   
  
   return 0;
}

