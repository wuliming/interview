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

void directly_insert(int *list, int len)
{
  int i=0;
  int j=0;
  for(i=1; i<len; i++)
  {
    int key = list[i];
    for(j=i-1; j>=0; j--)
    {
       if(list[j] > key)
       {
          list[j+1]=list[j];
          list[j] = key;
       }
       print(list, len);
    }
  } 
}
int main()
{
  int list[5]={5,4,3,2,1};
  int len = 5;
  directly_insert(list, len);
}
