#include <stdio.h>

#define SIZE 100

int n;

int i , x;

int top;

int choice;

int stack[SIZE];

void push(void);

void pop(void);

void display(void);

int main() {

    top = -1;

    printf("Enter The Size Of The Stack \n");
    scanf("%d",&n);

    // printf("Hello, World!\n");

    do{

        printf("Enter \n");
        printf("1 To Push \n");
        printf("2 To Pop \n");
        printf("3 To Display \n");
        printf("4 To Exit \n");

        scanf("%d",&choice);

        switch (choice) {

            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
                printf("Enter A Valid Choice \n");

        }
    } while (choice != 4);

    return 0;

}

void push(){

    if (top >= n-1){

        printf("Stack Is Full \n");

    } else{

        printf("Enter The Element \n");
        scanf("%d",&x);

        top = top + 1;

        stack[top] = x;

        printf("Element Is Inserted In The Stack \n");

    }
}

void pop(){

    if (top <= -1){

        printf("Stack Is Empty \n");

    } else{

        printf("Element Which Is Removed Or Taken Out From The Stack Is %d \n",stack[top]);

        top--;

    }
}

void display(){

    printf("Stack Is : \n");

    if (top >= 0){

        for (i = top; i >= 0; i--){

            printf("%d \n",stack[i]);

        }
    } else{

        printf("Stack Is Empty \n");

    }
}