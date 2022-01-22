#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;
 
    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
    while (choice)      //choice=1
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");   //10
        scanf("%d", &head-> num);
        if (first != 0)    //first=0
        {
            temp->ptr = head;  //temp point to address of head
            temp = head;    
        }
        else //true
        {
            first = temp = head;     
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");  //0
        scanf("%d", &choice);
 
    }
    temp->ptr = 0;    //address=0
   
    temp = first;   //temp=1
    printf("\n status of the linked list is\n");
    while (temp != 0) //true
    {
        printf("%d=>", temp->num);
        count++;                        //1
        temp = temp -> ptr;             //temp=0
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);  //1
}