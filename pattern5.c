/******** C program to print the below pattern

  1
  2 1
  3 2 1 
  4 3 2 1
  5 4 3 2 1

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

