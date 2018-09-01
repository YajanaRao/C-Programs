#include <stdio.h>

void  withoutBreak(){
    int i =2;
    printf("without Break\n");
    switch(i){
        case 1: printf("case 1\n");
        case 2: printf("case 2\n");
        case 3: printf("case 3\n");
        default: printf("default\n");
    }
}

void withBreak(){
    int i =2;
    printf("With break\n");
    switch(i){
        case 1: printf("case 1\n");
        break;
        case 2: printf("case 2\n");
        break;
        case 3: printf("case 3\n");
        break;
        default: printf("default\n");
        break;
    }
}

int main()
{
    withoutBreak();
    withBreak();
    
    return 0;
}




