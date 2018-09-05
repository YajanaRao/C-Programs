
#include <stdio.h>

// To verify given number is prime
int isPrime(int number)
{
    int i,prime=0;
    for(i=2;i<number;i++){
        if (number%i==0){
            prime = 1;
            break;
        }
    }
    return prime;
}


// to check entered number is prime
int primeNumber(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(!isPrime(number)){
        printf("%d is a prime number",number);
    }
    else{
        printf("%d is not a prime number",number);
    }
    return 0; 
}

int main()
{
    int start,end;
    printf("Enter the start of the series :");
    scanf("%d",&start);
    printf("Enter the end of the series :");
    scanf("%d",&end);
    
    for(start;start<=end;start++){
        if(!isPrime(start)){
            printf("%d\t",start);
        }
    }
    return 0;
}


