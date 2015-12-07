#include<stdlib.h>
#include<stdio.h>

void bubblesort(int *list, int len)
{
  int i=0;
  int j=0;
  for(i=0; i<len; i++)
  {
    for(j=0; j<len-i-1; j++)
    {
      int temp=0;
      if(list[j] > list[j+1])
      {
           temp=list[j];
           int k=0;
           list[j]=list[j+1];
           list[j+1]=temp;
           for(k; k<5; k++)
           {
               printf("%d", list[k]);
           }           
           printf("\n");
      }
    }
  }
}

int main()
{
   int list[5]={5,4,3,2,1};
   bubblesort(list, 5);
   int i=0;
   for(i; i< 5; i++)
   {
     printf("%d \n", list[i]);
   }
}
