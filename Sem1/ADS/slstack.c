#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}

;
struct node *start;

void push() {
    int x;
    struct node *ptr;
    ptr=malloc(sizeof(struct node));

    if(ptr==NULL) {
        printf("\nCan't Push element");
    }

    else {
        printf("\nEnter the value:");
        scanf("%d", &x);

        if(start==NULL) {
            ptr->data=x;
            ptr->next=NULL;
            start=ptr;
        }

        else {
            ptr->data=x;
            ptr->next=start;
            start=ptr;
        }
    }
}

void pop() {
    int x;
    struct node*ptr;

    if(start==NULL) {
        printf("\nUnderflow");
    }

    else {
        x=start->data;
        ptr=start;
        start=start->next;
        free(ptr);
        printf("elemet popped-%d", x);
    }
}

void traverse() {
    struct node*temp;

    if(start==NULL) {
        printf("\nList is empty\n");
    }

    else {
        temp=start;
        printf("The list is \n");

        while(temp !=NULL) {
            printf("%d->", temp->data);
            temp=temp->next;
        }
    }
}

void search() {
    int i=1,
    f=0,
    x;
    struct node*ptr;

    if(ptr==NULL) {
        printf("\nStack is empty");
    }

    else {
        printf("\nEnter an element");
        scanf("%d", &x);

        while(ptr !=NULL) {
            if(ptr->data==x) {
                f=1;
                break;
            }

            i++;
            ptr=ptr->next;
        }

        if(f==0) {
            printf("\nItem not found");
        }

        else {
            printf("\n Item found at position %d", i);
        }
    }
}

void main() {
    int ch=0;

    while(ch !=5) {
        printf("\n\n1:Push");
        printf("\n2:Pop");
        printf("\n3:Linear Search");
        printf("\n4:Display");
        printf("\n5:Exist");
        printf("\nEnter your choice:");
        scanf("%d", &ch);

        switch(ch) {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: search();
            break;
            case 4: traverse();
            break;
            case 5: exit(0);
            break;
            default: printf("\nInvalid choice");
        }
    }
}
