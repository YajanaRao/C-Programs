#include <stdio.h>
#include <string.h>
int main()
{
     char inputstr[100];
     char tempstr[20];
     gets(inputstr);
     gets(tempstr);
     if(strcmp(inputstr, tempstr) == 0){
        puts("strcmp: strings are equal\n");
     }
     printf ("strstr: %s\n", strstr(inputstr, "yaj"));
     printf("strchr: %s\n", strchr(inputstr, 'y'));
     strncpy(inputstr,tempstr, 10);
     printf("strncpy: %s\n", inputstr);
     strncat(inputstr, tempstr,12);
     printf("strncat: %s\n", inputstr);
     strcat(inputstr, tempstr);
     printf("strcat: %s\n", inputstr);
     return 0;
}
