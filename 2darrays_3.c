#include<stdio.h>
#define rows 2
#define cols 3
int main()
{
	int a[2][3]={10,20,30,40,50,60};
	int b[2][3]={{100,200,300},{400,500,600}};
	printf("%d\n",a[1][1]);//accessing row1 and column1 of array a
	printf("%d\n",b[1][2]);//accessing row1 and column2 of array b
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("address of each element=a[%d][%d]=%p,value is=%d\n",i,j,&a[i][j],a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("\naddress of each element=b[%d][%d]=%p,value is=%d\n",i,j,&b[i][j],b[i][j]);
		}
	}
	printf("base address of array a=%p ,address of first element :%p\n",a,&a[0][0]);
	printf("base address of array b=%p ,address of first element :%p\n",b,&b[0][0]);
}
