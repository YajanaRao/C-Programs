#include <stdio.h>

void selectionSort(int arr[],int length){
    int temp;
    for(int i=0;i< length - 1; i++){
        for(int j=i+1;j< length; j++){
            if(arr[i]< arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[100], length;
    
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    
    printf("Enter the array elements: \n");
    for(int i=0; i<length; i++){
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, length);
    
    for(int i=0; i<length; i++){
        printf("%d", arr[i]);
    }
    
    return 0;
}
