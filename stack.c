#include <stdio.h>

# define size 3 
int stack[size];
int top =-1;

void push(int a){
    if(top == size-1){
        printf("Stack overflow\n");
    }else{
        top++;
        stack[top] =a;
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }else{
        printf("Popped element is %d\n",stack[top]);
        top--;
    }
}

void peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }else{
        printf("Top element is %d\n",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements are: ");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("\nStack operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
