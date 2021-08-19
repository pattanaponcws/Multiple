#include<stdio.h>

int main(){
    int num,num1,a,b,c; 
    printf("Input you number (Between100-999):");
    scanf("%d",&num);

    a = num/100;
    b=(num%100)/10;
    c=num%10;

    while(a>0 , b>0 , c>0){
        num1 = a*b*c;
        printf("%d x %d x %d = %d\n",a,b,c,num1);
        a = num1/100;
        b=(num1%100)/10;
        c=num1%10;


    }
    printf("%d x %d x %d = %d",a,b,c,0);


    return 0;
}