#include <stdio.h>
#include<stdlib.h>
#define rows 3
#define columns 3
int main()
{
   int* ptr=(int *)malloc((rows*columns)*sizeof(int));
   int i,j;
   for(i=0;i<rows*columns;i++)
    {
        ptr[i]=i+1;
    }
   
   for(i=0;i<rows;i++)
   {
       for(j=0;j<columns;j++)
       {
         printf("%d",ptr[i*columns+j]);  
       }
       printf("\n");
   }
   free(ptr);
   ptr=NULL;

    return 0;
}
