/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num[100],size,i,sorted[100];
    
    printf("Enter no of elements :");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    
    sorted = ascending(num);
    return 0;
}

int * ascending(int num[]){
    int i,j,large;
    int size = 4;
    
    for (i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(num[i]>num[j]){
                //printf("%d",num[i]);
                large = num[j];
                num[j] = num[i];
                num[i] = large;
            }
        }
    }
    
    for(i=0;i<size;i++){
        printf("%d",num[i]);
    }

    return num;
}
