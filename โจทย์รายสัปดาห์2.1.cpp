#include<stdio.h>
int main () 
{
	int num,x;
	scanf("%d",&num);
	
	for(x=1 ; x<=num ; x=x+1)
	    {
		    if(x==1||x<=num)
		    {
			    printf("*");
		    }
	    }
	return 0;
}
