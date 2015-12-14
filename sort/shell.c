#include<stdio.h>
#include<stdlib.h>
#include<time.h>

static num = 0;
void print(int *list, int len)
{
   int i=0;
   for(i; i<len; i++)
   {
     printf("%d ", list[i]);
   }
   printf("\n");
   num++;
}

void insert(int *list, int len, int k, int d)
{
    int i = 0;
    int j = 0;
    for(i=d+k; i<len; i+=d)
    {
       int key = list[i];
       for(j=i-d; j>=0; j-=d)
       {
         if( list[j] > list[j+d] )
         {
            list[j+d] = list[j];
            list[j] = key;
         }
         print(list, len);
       }
    }
}

void shell(int *list, int len)
{
  int k = 0;
  int d = len/2;
  while(d > 1)
  {
    for(k=0; k<len; k++)
    {
       insert(list, len, k, d);
    }
    d=d/2;
  } 
}
int main()
{
  clock_t start, finish;  
  double  duration;
  start = clock();
  int list[5]={5,4,3,2,1};
  int len = 5;
  shell(list, len);
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  printf("sort times is : %d and the time is %f\n", num, duration);
}
