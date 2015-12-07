#include<stdio.h>
#include<stdlib.h>
void print(int *list, int len)
{
   int i=0;
   for(i; i<len; i++)
   {
     printf("%d", list[i]);
   }
   printf("\n");
}

void shell(int *list, int len)
{
  int i = 0;
  int j = 0;
  int d = len/2;
  while(d > 0)
  {
    for(i; i<len; i+d)
    {
       int key = list[i];
       
    }
  } 
}
int main()
{
  int list[5]={5,4,3,2,1};
  int len = 5;
  shell(list, len);
}
