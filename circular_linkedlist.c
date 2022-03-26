#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct clist
{
    int data;
    struct clist *link;
} node ;

node *create( node *head)
  { 
    
    int item;
    int option, ch=1;
    

    if(head!=NULL)
    {
        printf("------the list already exists----");
        return (head);
    }
        
          node* temp= ( node*)malloc(sizeof( node));
          temp=head;

          while (ch==1)
     { 
       
         printf("\nenter the element we want to enter in linkedlist : ");
         scanf("%d",&item);
          node* new= ( node*)malloc(sizeof( node));
          new->data=item;
        if (head==NULL)
        {
            temp=head=new;
            
        }                                                 
        else
        {
            temp->link=new;
            temp=new;
          
        }
           new->link=head;
        printf("\t\n do you want to continue 1)yes    2)no     :  ");
        scanf("%d",&option);
       ch=option;
        }
        

     return (head);
}
void display( node *head)
{
    node *t;
   
    if (head==NULL)
    {
        printf("------linked list is empty or exists already----");
     return ;
    }
    else
    
    {   printf("\n\t   address    data    new address");
       if((head->data>120)&&(head->data<255))
    {printf("\n\t %10u    %d   %10u",head,head->data,head->link);}
        for(t=head->link;t!=head;t=t->link)  
         {
             if((t->data>120)&&(t->data<255))
          {printf("\n\t %10u    %d   %10u",t,t->data,t->link);}
         }
            
        
       
    }
    
}

int main()
{
    
    int choice;
    node* head= ( node*)malloc(sizeof( node));
     head=NULL;
     while (1)
     {
      printf("\n\t\t-----------main menu-------\n");
     printf("\t 1) create a circular linkedlist\n");
     printf("\t 2) display only between the range 120 t0 255\n");
     printf("\t 3) exit\n");

     printf("\tenter the choice  ");

     scanf("%d",&choice);

        switch(choice)
      {
         case 1:
        head=create(head);
           break;
          case 2:
          display(head);
          break;
        case 3:
          exit(0);
      }
     }
    }