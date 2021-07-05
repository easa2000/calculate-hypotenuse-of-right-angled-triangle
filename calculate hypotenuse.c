// Calculate the hypotenuse of a right angled triangle

#include<stdio.h>
int hypo(int,int);
void main(){
    int a,b,res;
    printf("\n Enter the value of a: ");
    scanf("%d",&a);
    printf("\n Enter the value of b: ");
    scanf("%d",&b);

    res = hypo(a,b);
    printf("\n Hypotenuse of right angled triangle: %d",res);
}
int hypo(int a,int b){
    int c = sqrt((a*a) + (b*b));
    return c;
}
