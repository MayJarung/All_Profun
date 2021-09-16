#include <stdio.h>  
int main()  
{  
    int n,x,y;  
    int i=0;
    printf("Enter number : ");  
    scanf("%d",&n);   
    for(i=1 ; i<=n ; i=i+1)
    {
	    for(x=1 ; x<=n ; x=x+1)
	    {
		    if(x==1||x<=n)
		    {
		     	printf("*");
		    }  
	    }
	    printf("\n");
	}  
    return 0;  
}  

