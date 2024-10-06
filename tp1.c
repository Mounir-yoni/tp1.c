#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h> 



void res( float del,int a,int b,int c){
    if (del>0)
    {
       float  x1 = (-b + sqrt(del))/(2*a);
       float  x2 = (-b - sqrt(del))/(2*a);
       printf("The function has two solutions:%f and %f\n",x1,x2);
    }else{
        if(del==0){
           float x= -b/(2*a);
            printf("The function has only one solution, which is%f\n",x);
        }
        else{
            printf("The function has no solution.\n");
        }
    }
    
}


float delta(int a,int b,int c){

    float x = (b*b)-(4*a*c);
    return x;
}

int main(){

int a,b,c;

    printf("give a\n");
    scanf("%d",&a);
    printf("give b\n");
    scanf("%d",&b);
    printf("give c\n");
    scanf("%d",&c);

   float  del =delta(a,b,c);
    res(del,a,b,c);

}


















