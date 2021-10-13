#include<stdio.h>
int main () 
{
	int num,a=1,b=1;
	printf("Enter number : ");
	scanf("%d",&num);
	
	    for(int b=1; b<=num;)
		{
			if(num % b == 0)
			{
				if(a=1)
				{  
	    		printf("%d ",b);
		    	}
		    }
		    b++;
	    }
    	return 0;
}
