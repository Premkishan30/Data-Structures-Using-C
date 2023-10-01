#include <stdio.h>
#include <stdlib.h>
struct node{
    int val;
   struct node *next;
};

struct node *start=NULL;

void insertBegin();
void insertAfter();
void insertEnd();
void display();
void deleteBegin();
void deleteEnd();
void deleteAfter();

int main()
{
    int ch;
    printf("\n----------Welcome to Singly Linked List program-------------");
    while(1)
        {

            printf("\n 1. Insert At Begin.");
            printf("\n 2. Insert At End.");
            printf("\n 3. Insert After a Number.");
            printf("\n 4. Display Linked List.");
            printf("\n 5. Delete Beginning Node.");
            printf("\n 6.Delete End Node.");
            printf("\n 7.Delete A Element.");
            printf("\n 8.Exit.");
            printf("\n Please Enter Your choice:");
            scanf("%d",&ch);

            switch(ch)
            {
            case 1:
                insertBegin();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                insertAfter();
                break;
            case 4:
                display();
                break;
            case 5:
                deleteBegin();
                break;
            case 6:
                deleteEnd();
                break;
            case 7:
                deleteAfter();
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("\n **********Please Enter the Proper Choice Only**********");
            }
        }
}

void insertBegin()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
        {
            printf("\nMemory allocation problem");
        }
    if(start==NULL)
        {

            printf("\n ********New Linked list is Created********\nPlease enter a element to be inserted:");
            scanf("%d",&n->val);
            n->next=NULL;
            printf("Element Inserted");
            start=n;
        }
        else
            {
                printf("\nEnter The Element to be inserted in the list:");
                scanf("%d",&n->val);
                n->next=start;
                start=n;
                printf("\nElement Inserted Succesfullly");
            }
}

void insertEnd()
{
    struct node *n,*temp;
     if(start==NULL)
        {
            printf("\n No Linked List Exist");
        }
    else
        {
            n=(struct node*)malloc(sizeof(struct node));
            if(n==NULL)
                {
                    printf("\n Memory Allocation problem");
                }
            else
                {
                    temp=start;
                    while(temp->next !=NULL)
                        {
                            temp=temp->next;
                        }
                        printf("\nEnter the element to be inserted:");
                        scanf("%d",&n->val);
                        temp->next=n;
                        n->next=NULL;
                        printf("\nElement Inserted:");
                }
        }
}

void insertAfter()
{
    struct node *n,*temp;
    int search;
     if(start==NULL)
        {
            printf("\n No Linked List Exist");
        }
        else
            {
                printf("\nEnter the element after which you want to insert:");
                scanf("%d",&search);
                temp=start;
                while(temp !=NULL)
                    {
                        if(temp->val==search)
                            {
                                printf("Element found");
                                n=(struct node*)malloc(sizeof(struct node));
                                if(n==NULL)
                                    {
                                        printf("\n Memory allocation Problem");
                                    }
                                printf("\n Enter the element to be inserted:");
                                scanf("%d",&n->val);
                                n->next=temp->next;
                                temp->next=n;
                                printf("\nElement Inserted");
                                break;
                            }
                            temp=temp->next;

                    }
                    if(temp==NULL)
                        {
                            printf("\nEntered Element is not in the list");
                        }
            }
}

void display()
{
    struct node *temp;
    if(start==NULL)
        {
            printf("\n No Linked List Exist");
        }
    else
        {
            printf("\nThe List Contains:\n");
                temp=start;

                while(temp !=NULL)
                    {
                             printf("          %d",temp->val);
                             temp=temp->next;

                    }
        }
}

void deleteAfter()
{
    struct node *temp,*n;
    int x;
    if(start==NULL)
        {
            printf("\nNO linked list exist");
        }
    printf("Enter the element you want to delete");
    scanf("%d",&x);
    temp=start;
    while(temp !=NULL)
        {
            if(temp->val==x && temp->next==NULL)
                {
                        deleteEnd();
                        break;
                }
            else if(start->val==x)
                {
                    deleteBegin();
                    break;
                }
            else if(temp->val==x)
                {
                    n->next=temp->next;
                    printf("\nElement found and deleted");
                    free(temp);
                    break;
                }
                else
                    {
                        n=temp;
                        temp=temp->next;
                    }
        }
        if(temp==NULL)
            {
                printf("\n There is no element in the List");
            }

}

void deleteBegin()
{
    struct node *temp;
    if(start==NULL)
        {
            printf("\n No Linked List Exist");
        }
    else{
    temp=start;
    printf("\nThe element to be deleted is %d",temp->val);
    start=start->next;
    free(temp);
    printf("\n **********And the element is Deleted succesfully**********");
    }
}
void deleteEnd()
{
    struct node *temp,*n;
    if(start==NULL)
        {
            printf("\n No Linked List Exist");
            return;
        }
    if(start->next==NULL)
        {
            printf("The element to be deleted is %d",start->val);
            temp = start;
            start=NULL;
            free(temp);
            printf("\n **********And the element is Deleted succesfully**********");
        }
        else
        {
            temp=start;
            while(temp->next!=NULL)
                {
                    n=temp;
                    temp=temp->next;
                }
                //n=temp->next;
                n->next=NULL;
                printf("\nThe Element to be deleted is :%d",temp->val);
                free(temp);
                printf("\n **********And the element is Deleted succesfully**********");

        }
}
