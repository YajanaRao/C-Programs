#include <stdio.h>

int isPrime(int);

int main(){
    int num, prime;
    printf("Enter a number to check prime number: ");
    scanf("%d",&num);
    prime = isPrime(num);
    printf("Prime number Status %d\n", prime);
    return 0;
}

int isPrime(int num){
    int i;
    for(i=num-1;i>1;i--){
        if(num%i == 0){
            return 1;
        }
    }
    return 0;
}
