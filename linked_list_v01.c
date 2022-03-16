/* A simple C program to create a linked list of three elements. */
/* Also demonstartes the printing of elements in the list. */

#include<stdio.h>
#include <stdlib.h>
struct list {

       int data;          //stores data
       struct list *next; //stores a ponter to next element
};
struct list *head=NULL /* always points to the start of the list */, 
       *p /* a temporary pointer to hold address of new element */,
       *q /* a temporary pointer to traverse the list */;
int i     /* loop control variable */;
int main()
  {
    for (i=0;i<3;i++)
      {
         p=(struct list*) malloc(sizeof(struct list));
         scanf("%d",&p->data);
         p->next=NULL;
         if (head==NULL) //the first element of the list
            head=p;
         else
            { //the list has some elements
               q=head;
               while(q->next!=NULL)
                  q=q->next;
               q->next=p;   
            }   
      };//end of for(i)   
     q=head;
     printf("\nThe list is. ");
     while(q!=NULL)
       {
         printf("%d --> ",q->data);
         q=q->next;
       }//loop to print data 
    printf("\n");    
  }//end of main()























