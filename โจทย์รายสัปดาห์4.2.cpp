#include<stdio.h>
int main()
{
    int num,x,y;
    
    printf("Enter number : ");
    scanf("%d", &num);
     
    for(x=0; x<num; x++)
    {
        if(x==0 || x==num-1)
        {
            printf("\*");
            for(y=0; y<num-1; y++)
            {
                printf("*");
            }
            printf("\n");
             
            continue;
        }
         
        printf("\*");
         
        for(y=0; y<num-2; y++)
        {
            printf(" ");
        }
         
        printf("*\n");
    }
     
    return 0;
}
