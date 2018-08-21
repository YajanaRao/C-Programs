/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    // for loop
    printf("For loop   :");
    for(i=0;i<=9;i++){
        printf("%d\t",i);
    }
    printf("\n");
    i=0;
    
    // while loop
    printf("While loop :");
    while(i<=9){
        printf("%d\t",i);
        ++i;
    }

    return 0;
}
