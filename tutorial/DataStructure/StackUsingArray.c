#include <stdio.h> 
#include <stdlib.h>

int top=-1; 
int data[100]; 

void push(int value){
    if(top != 99){
        data[++top] = value; 
    }else {
        printf("Stack is full\n");
    }

}

int pop(){
    if(top == -1){
        printf("Stack is empty\n");
    }else {
        return data[top--];
    }
}
void list(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d\n", data[i]);
    }
}

int main() 
{ 
	pop();
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
