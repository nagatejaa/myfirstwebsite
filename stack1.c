#include <stdio.h>
#include <stdlib.h>
#define n 5
int top = -1, stack[n];

void push() {
    int x;
    if (top == n - 1) {
        printf("OVERFLOW\n");
    } else {
        printf("Enter the value to be pushed : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop() {
    int item;
    if (top == -1) {
        printf("UNDERFLOW\n");
    } else {
        item = stack[top];
        top--;
        printf("The poped value is : %d\n", item);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("The top value of stack is : %d\n", stack[top]);
    }
}

void display() {
	int i;
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
    printf("Stack in ACTUAL order is : ");
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
    }
}

void reverse() {
	int i;
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
    printf("Stack in REVERSE order is : ");
    for (i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
    }
}

int main() {
    int ch;
    do {
        printf("\n******MENU******");
        printf("\n0 : EXIT\n1 : PUSH \n2 : POP \n3 : PEEK\n4 : DISPLAY IN SAME ORDER\n5 : DISPLAY IN REVERSE ORDER\nEnter your choice : ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch) {
            case 1:
                push();
                break;
            case 2:pop();break;
            case 3:peek();break;
            case 5:reverse();break;
            case 4:display();break;
            case 0:printf("ENDING THE PROGRAMME :)\n");break;
            default:printf("Invalid\nChoose only from given menu\n");
        }
    } while (ch != 0);

    return 0;
}
