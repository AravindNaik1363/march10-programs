#include <stdio.h>
#define rows 3
#define columns 3
int main()
{
    int arr[rows][columns],i,j;
    printf("enter elements in matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\nelements in matrix are:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}

