#include <stdio.h>

int factorial(int);

int main(){
    int num, fact;
    printf("Enter a number to find factorial: ");
    scanf("%d",&num);
    fact = factorial(num);
    printf("factorial of %d is %d\n", num,fact);
    return 0;
}

int factorial(int num){
    int i, fact=1;
    for(i=num;i>0;i--){
        fact = fact * i;
    }
}
