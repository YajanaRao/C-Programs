/* Intriduction to while and for loop */
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
