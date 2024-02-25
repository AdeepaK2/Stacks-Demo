#include <stdio.h>
#include <stdbool.h>
#define n 4

int top=-1;
int arr[n];

void push();
int pop();
int peek();
bool isEmpty();
bool isFull();

int main() {
    push();
    push();
    push();
    push();
//    printf("Value:%d\n",pop());
//    printf("Value:%d\n",pop());
    printf("Peek Value:%d\n",peek());
    printf("Is Full:%d\n",isFull());
    return 0;
}


void push(){
    if(top==n-1){
        printf("Overflow Err!");
    }else{
        printf("Enter Value to Push to Stack:");
        top++;
        scanf("%d",&arr[top]);
    }
}

int pop(){
    if(top==-1){
        printf("Underflow State");
    }else{
        int x;
        x=arr[top];
        top--;
        return x;
    }
}

int peek(){
   int x=arr[top];
   return x;
}

bool isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(top==n-1){
        return true;
    }else{
        return false;
    }
}





