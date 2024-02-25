#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;


bool isEmpty();
void push(int);
int pop();
void display();
int peek();

int main(){
    push(12);
    push(14);
    push(15);
    pop();
    printf("Peek:%d\n",peek());
    display();

}

bool isEmpty(){
    if(head==NULL){
        return true;
    }else{
        return  false;
    }
}

void push(int num){
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;
    if(isEmpty()==true){
        head=temp;
    }else{
        temp->next=head;
        head=temp;
    }
}

int pop(){
    struct node* ptr=head;
    int item;
    if(isEmpty()==true){
        printf("No Stack Created.");
    }else{
        item= ptr->data;
        head=ptr->next;
        ptr->next=NULL;
        free(ptr);
        return item;
    }
}

int peek(){
    if(isEmpty()==true){
        printf("No Peek");
    }else{
        int x=head->data;
        return x;
    }
}

void display(){
    struct node* ptr=head;
    while (ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}