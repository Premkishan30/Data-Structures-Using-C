#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 7

int stack1[MAX_SIZE],top=-1;
void push(int);
void pop();
void peek();
int isEmpty();
int isFull();
void display();

int main()
{
    int ch,item;
    while(true)
        {
            printf("\nThis is a Stack Program:");
            printf("\n 1.PUSH element");
            printf("\n 2.POP element");
            printf("\n 3.PEEK stack");
            printf("\n 4.Display Elements");
            printf("\n5.EXIT");
            printf("\n Enter Your Choice:");
            scanf("%d",&ch);

            switch(ch)
            {
            case 1:
                printf("Enter the element to be inserted:");
                scanf("%d",&item);
                push(item);
                break;

            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice");
                break;
            }

        }
}
void push(int e)
{
    if(isFull())
        {
            printf("\n Cannot Push | Stack Is FULL");

        }
        else
            {
                 top++;
            stack1[top]=e;
            printf("\n Element %d is Succesfully Pushed:",e);
            }
}


//check for Empty Stack
int isEmpty()
{
    if(top==-1)
        {
            return 1;
        }
        else
            {
                return 0;
            }
}

int isFull()
{
    if(top == 6)
        {
            return 1;
        }
        else
            {
                return 0;
            }
}
void pop()
{
    if(isEmpty())
        {
            printf("\nCannot Pop | Stack is EMPTY");
        }
        else
            {
                printf("Poped Element is%d:",stack1[top]);
                top--;
            }
}
void peek()
{
    if(isEmpty())
        {
            printf("\nCannot Peek | Stack is EMPTY");
        }
        else
            {
                printf("Pointer is at %d location and the Element is:%d",top,stack1[top]);
            }
}
void display()
{
      if(isEmpty())
        {
            printf("\nCannot display | Stack is EMPTY");
        }
        else
            {
                printf("Elements of Stack are:\n");
                for(int i=0;i<=top;i++)
                    {
                        printf("\t%d",stack1[i]);
                    }
            }
}
