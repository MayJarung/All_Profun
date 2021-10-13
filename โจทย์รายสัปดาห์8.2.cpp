#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int num, eiei[50];
	printf("Enter number : ");
	scanf("%d",&num);
	fflush(stdin);
	for(int i=1; i<=num; i++)
	{
		if(num%i == 0)
		{
			printf("%d ",i);
		}
	}
	getch();
}
