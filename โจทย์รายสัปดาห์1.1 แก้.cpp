#include<stdio.h>
int main()
{
	int x,y,sum;
	scanf("%d",&x);
	scanf("%d",&y);

	printf("%d + %d = %d \n",x,y,(sum=x+y));
	printf("%d - %d = %d \n",x,y,(sum=x-y));
	printf("%d * %d = %d \n",x,y,(sum=x*y));
	printf("%d / %d = %d \n",x,y,(sum=x/y));
	
	return 0;
}
