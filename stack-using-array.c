#include<stdio.h>

void push();
void pop();
void peek();

int stack[50];
int i,option;
int top=-1;

void main(){
    while(option != 4){
        printf("Choose from below options -- ");
        printf("\n 1.Push \n 2.Pop \n 3.Peek \n 4.Exit \n");
        printf("Enter your options : ");
        scanf("%d",&option);

        switch (option){
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            peek();
            break;
        }
        case 4:{
            printf("Exiting");
            break;
        }
        default:{
            printf("Invalid Option");
            break;
        }
    }
    }
}


void push(){
    if (top==50){
        printf("Overflow Error \n");
        return;
    }
    else{
        top = top+1;
        printf("Enter Element : ");
        scanf("%d",&stack[top]);
    }
}

void pop(){
    int value;
    if (top==-1){
        printf("Underflow \n");
    }
    else{
        value = stack[top];
        top = top-1;
    }
}

void peek(){
    if (top==-1){
        printf("Empty Stack");
        return;
    }
    else{
        for (i=top ; i>-1;i--){
            printf("Element at index %2d ---> %d \n",i,stack[i]);
        }
    }
}