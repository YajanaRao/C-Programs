#include <stdio.h>

void interface(int array[], int size){
    int i;
    printf("Enter random numbers: \n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}

void sort(int array[], int size){
    int i,j, temp;
    for(i=0;i<size;i++){
        for(j=0;j<size-1;j++){
            if(array[i] < array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int main()
{
    int n=5,i;
    int array[n];
    interface(array,n);
    sort(array,n);
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}
