#include<stdio.h>
int main()
{
	int a[2][3][2];
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("enter the array a[%d][%d][%d]:",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("array elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("a[%d][%d][%d]=%d\t",i,j,k,a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("base address of array is:%p\n",a);
	printf("first element array:a[0][0][0]=%d\n",a[0][0][0]);
	printf("first element address array:a[0][0][0]=%p\n",&a[0][0][0]);
	printf("middle element array:a[0][2][0]=%d\n",a[0][2][0]);
	printf("middle element address array:a[0][2][0]=%p\n",&a[0][2][0]);
	printf("last element of array:a[1][2][1]=%d\n",a[1][2][1]);
	printf("last element of address array:a[1][2][1]=%p\n",&a[1][2][1]);
}
