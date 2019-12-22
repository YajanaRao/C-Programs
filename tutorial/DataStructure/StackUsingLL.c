#include <stdio.h> 
#include <stdlib.h>

struct node { 
	int data; 
	struct node* link; 
} *top;

void push(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->link = top;
    top = n;
}

int pop(){
    if(top == NULL){
        printf("Stack is empty");
    }else {
        int temp = top->data;
        top = top->link;
        return temp;
    }
}
void list(){
    struct node *ptr;
    ptr = top;
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main() 
{ 
	push(2);
	push(3);
	list();
	printf("%d\n",pop());
	push(4);
	push(5);
	list();
	return 0; 
} 
