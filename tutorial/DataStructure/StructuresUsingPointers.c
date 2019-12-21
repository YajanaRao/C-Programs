#include <stdio.h>
#include <stdlib.h>


struct person 
{ 
   char name[50]; 
   int age; 
};

int main(){
    int num,i;
    struct person *ptr;
    printf("Enter number of employees: ");
    scanf("%d",&num);
    
    // allocating memory for n numbers of struct person
    ptr = (struct person*) malloc(num * sizeof(struct person));
       for(i = 0; i < num; ++i)
   {
       printf("Enter first name and age respectively: ");
       // To access members of 1st struct person,
       // ptr->name and ptr->age is used
       // To access members of 2nd struct person,
       // (ptr+1)->name and (ptr+1)->age is used
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }
   printf("Displaying Information:\n");
   for(i = 0; i < num; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
    return 0;
}

