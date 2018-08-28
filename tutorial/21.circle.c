
#include <stdio.h>

void drawcircle(int r){
    int N = 2 * r + 1;
    
    int x,y;
    
    /* draw a circle of size N * N */
    
    for (int i = 0; i<N;i++){
        for (int j = 0;j<N;j++){
            x = i - r;
            y = j - r;
            
            /* if this point inside the circle print it */
            if(x*x + y*y <= r*r +1){
                printf(".");
            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
}


int main()
{
    drawcircle(8);

    return 0;
}


