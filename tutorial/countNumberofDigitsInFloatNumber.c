#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[100] = "345653.8768";
    int count=0;
    int i=0;
    int len;
    int before_decimal = atoi(num);
    int after_decimal;
    int total_Count;
    printf("Converting string to int : %d\n", before_decimal);
    
    //Lets count the numbers of digits before before_decimal
    while(before_decimal!=0){
        before_decimal = before_decimal/10;
        count++;
    }

    printf("number of digits before decimal are %d\n",count);
    //Lets get the number of digits after decimal
    
    // first get the lenght of the string
    len = strlen(num);
    printf("Total number of digits including '.' are =%d\n",len);
    
    //Now count the number after '.' decimal points
    // Hope you know how to compare the strings
    while(num[i]!='.'){
       i++; 
    }
    // total lenght of number - numberof digits after decimal -1(becuase every string ends with '\0')
    after_decimal= len-i-1;
    printf("Number of digits after decimal points are %d\n",after_decimal);
    
    //Lets add both count Now
    // ie. Number of digits before decmal and after decimal
    
    total_Count = count+ after_decimal;
    
    printf("Total number of digits are :%d\n",total_Count);
    return 0;
}
