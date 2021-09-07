#include<stdio.h>
int main () 
{
	int num,x;
	scanf("%d",&num);
	
	for(x=1 ; x<=num ; x++)
	    {
		    if(x==1||x<num||x==num)
		    {
			    printf("*");
		    }
	    }
	return 0;
}
