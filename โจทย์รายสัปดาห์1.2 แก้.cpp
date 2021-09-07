#include<stdio.h>
int main()
{
	int x,y,sum1,sum2,sum3,sum4;
	scanf("%d",&x);
	scanf("%d",&y);
	
	sum1=x+y;
	sum2=x-y;
	sum3=x*y;
	sum4=x/y;
	printf("%d + %d = %d \n %d - %d = %d \n %d * %d = %d \n %d / %d = %d \n",x,y,sum1,x,y,sum2,x,y,sum3,x,y,sum4);
	
	return 0;
}
