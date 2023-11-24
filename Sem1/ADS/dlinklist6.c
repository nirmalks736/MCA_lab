#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
    {
    
    int data;
    struct node*prev;
    struct node*next;
    };
    
struct node*start;
void beginsert() 
    {  
    struct node*ptr;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
     {
     printf("\n Overflow");
     }
    else
     {
     printf("\nEnter value :");
     scanf("%d",&x);
     if(start==NULL)
      {
      ptr->data=x;
      ptr->prev==NULL;
      ptr->next=NULL;
      start=ptr;
      }
     else
      {
      ptr->data=x;
      ptr->prev=NULL;
      ptr->next=start;
      start->prev=ptr;
      start=ptr;
      }
     }
    }  
void lastinsert()
{
    struct node*ptr,*temp;
    int x;
    prt=(struct node*)malloc(sizeof(struct node));
    if(prt==NULL)
     {   
     printf("\nOverflow");
     }
    else
     {
     printf("\nEnter value :");
     scanf("%d",&x);
     prt->data=x;
     if(start==NULL)
      {
      prt->next==NULL;
      prt->=NULL;
      start=prt;
      }
     else
      {
      temp=start;
      while(temp->next!=NULL)
       {
       temp=temp->next;
       }
      temp->next=ptr;
      ptr->prev=temp;
      ptr->next=NULL;
      }
     }
}  
void posinsert() 
{
    int pos,i,x;
    struct node*ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
     printf("\nOverflow");
    }
    else
    {
     printf("\nEnter value :");
     scanf("%d",&pos);
     temp=start
        
