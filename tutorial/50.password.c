#include<stdio.h>

int main(){
char str[20],c=' ';
char username[20];
int i=0;
system("cls");
printf("\nEnter username : ");
scanf("%s",&username);
printf("\nEnter the password [max length 10] : ");
while (i<=9){
    str[i]=getch();
    c=str[i];
    if(c==13) break;
    else printf("*");
    i++;
}
str[i]='\0';
i=0;
printf("\n");
printf("\n Welcome %s",username);
return 0;
}
