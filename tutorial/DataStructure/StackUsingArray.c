#include <stdio.h> 
#include <stdlib.h>

struct node { 
	int top; 
	int data[100]; 
} stack;

void push(int data){
    if(stack.top != 99){
        stack.data[++stack.top] = data; 
    }else {
        printf("Stack is full");
    }

}

int pop(){
    if(stack.top == 0){
        printf("Stack is empty");
    }else {
        return stack.data[stack.top--];
    }
}
void list(){
    int i;
    for(i=0;i<=stack.top;i++){
        printf("%d\n", stack.data[i]);
    }
}

int main() 
{ 
	stack.top = -1;
	push(2);
	push(3);
	list();
	printf("pop: %d\n",pop());
	push(4);
	push(5);
	list();
	printf("pop: %d\n",pop());
	list();
	return 0; 
} 
