/******** C program to print the below pattern

  5
  5 4
  5 4 3 
  5 4 3 2 
  5 4 3 2 1

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=num;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

