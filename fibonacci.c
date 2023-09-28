#include<stdio.h>

int main(){
    printf("Fibonacci Series:\n");
    int a,b,result;
    int n;
    printf("Please enter the length of the series: ");
    scanf("%d",&n);
    // printf("Entered number is %d",n);
    a=0;
    b=1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        result = a+b;
        a=b;
        b=result;
    }
    return 0;
}
