#include <stdio.h>

int main()
{
    
    fullPyramid();
    return 0;
}

void halfPyramid(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

}

void fullPyramid(){
    int length;
    int icon;
    printf("enter the size of the pyramid :");
    scanf("%d",&length);
    printf("enter the icon of the pyramid :");
    scanf("%d",&icon);
    for(int i=length;i>0;i--){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=i;j<length;j++){
            printf("%d",icon);
        }
        for(int j=i;j<length;j++){
            printf("%d",icon);
        }
        printf("\n");
    }
}

