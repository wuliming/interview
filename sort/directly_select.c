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

void directly_select(int *list, int len)
{
  int i=0;
  int j=0;
  for(i=0; i<len; i++)
  {
    for(j=i+1; j<len; j++)
    {
       int small = list[i];
       if(list[j] < small)
       {
          list[i] = list[j];
          list[j] = small;
       }
       print(list, len);
    }
  } 
}
int main()
{
  int list[5]={5,4,3,2,1};
  int len = 5;
  directly_select(list, len);
}
