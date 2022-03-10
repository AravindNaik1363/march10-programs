#include<stdio.h>  
int main()
{      
    int i=0,j=0;    
    char arr[4][3]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'}};     
    //traversing 2D array    
    for(i=0;i<4;i++)
    {    
        for(j=0;j<3;j++)
        {    
            printf("%c \t",arr[i][j]);    
        }//end of j
        printf("\n");
    }//end of i    
    return 0;  
}    
