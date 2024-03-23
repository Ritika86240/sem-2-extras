// Implement a Stack using Array and develop functions to perform push and pop operations using switch cases .
#include<stdio.h>
int stack[1000], max, top=-1, choice;
void push() {
    int value;
    if(top==max-1) {
        printf("Overflow\n");
    } else {
        printf("Push elements into stack :\n");
        while(top<max-1) {
            top++;
            printf("Enter the %d index value : \n", top);
            scanf("%d", &value);
            stack[top]=value;
        } 
    }
    printf("The elements in stack are :\n");
    for(int i=top; i>=0; i--) {
        printf("%d\n", stack[i]);
    }
}
void pop() {
    int value;
    if(top==-1) {
        printf("Underflow\n");
    } else {
        int deleted;
        printf("Enter the number of elements you want to pop\n");
        scanf("%d", &deleted);
        for(int i=0; i<deleted; i++) {
            value=stack[top];
            top--;
            printf("The deleted element is : %d\n", value);
        }
    }
    printf("The stack after deletion is : \n");
    for(int i=top; i>=0; i--) {
        printf("%d\n", stack[i]);
    }
    }
int main() {
    printf("Enter the size of the stack :\n");
    scanf("%d", &max);
    
    printf("1.pop 2.push 3.out\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: 
       printf("pop funtion"); 
         pop();
    break;
    case 2:
       printf(" push function");
         push();
    break;
    case 3: 
       printf(" no funtion called so out of function");
     break;
     default:
     printf("invalid choice");
     }
   
    return 0;
}