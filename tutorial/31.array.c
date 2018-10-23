#include <stdio.h>

int main()
{
    float marks[] = {1,2,3,4,5};
    int size=5;
    float sum=0,max=marks[0],min=marks[0];

    for(int i=0;i<size;i++){
        
        if(max < marks[i]){
            max = marks[i];
        }
        
        if(min > marks[i]){
            min = marks[i];
        }
        sum = sum + marks[i];
        

    }

    printf("Average %f\n",sum/size);
    printf("Maximum is %f\n",max);
    printf("Minimum is %f\n",min);
    return 0;
}
