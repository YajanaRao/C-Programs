#include <stdio.h>

int value = 1;

int power(int base,int raised){
    if (raised != 0){
        value = value * base;
        power(base,raised-1);
    }
}

int main()
{
    int base,raised;
    printf("Enter the base value:");
    scanf("%d",&base);
    printf("Enter the power raised:");
    scanf("%d",&raised);
    power(base,raised);
    printf("Power is %d\n",value);

    return 0;
}
