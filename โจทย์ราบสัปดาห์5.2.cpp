#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z;
    double s,ar;
    printf("Input x : ");
    scanf("%d",&x);
    printf("Input y : ");
    scanf("%d",&y);
    printf("Input z : ");
    scanf("%d",&z);
    s = (x+y+z)/2;
    ar = sqrt(s*(s-x)*(s-y)*(s-z));
    if(x>0 && y>0 && z>0){
        if(ar>0){
            printf("ar = %.2lf\n",ar);
        }
        else{
            printf("ar = 0");
        }
    }
    else{
    	printf("ar = 0");
	}
    return 0;
}
