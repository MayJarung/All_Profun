#include<stdio.h>
int main ()
{
	int num,x,y;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(x=1 ; x<=num ; x=x+1)
	{
	    for(y=1 ; y<=num ; y=y+1)
	    {
		    if(y==1||x==1||y==num||x==num)
		    {
			    printf("*");
		    }
		    else
		    {
			    printf(" ");
		    }
	    }
	    printf("\n");
	}
	return 0;
}

