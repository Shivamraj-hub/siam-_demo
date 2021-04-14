#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define OVER -132
#define UNDER -154

int readint()
{
    char inp[100];
    int bufsize=100,ret;
    
    fgets(inp,bufsize,stdin);
    sscanf(inp,"%d",&ret);
    return ret;
}

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
 

int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
 

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
 

int push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return OVER;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
    return 0;
}
 

int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return UNDER;
    return stack->array[stack->top--];
}
 

int main()
{
    printf("Enter stack size: ");
    int size=readint();
    
    struct Stack* stack = createStack(size);
    
    int popval, pushval, choice;
    
    while(1)
    {
        printf("\n*****Menu*****\n1. Push\n2. Pop\n3. Check Full\n4. Check Empty\n5. Exit\n");
        printf("\nChoose operation to perform: ");
        choice=readint();
        
        if (choice>=1 && choice<=4)
        {
            switch(choice)
            {
                case 1: 
                    printf("\nEnter an integer value:\n");
                    int pushed=readint();
                    pushval = push(stack,pushed);
                    if (pushval == OVER)
                        printf("\nError: Stack overflow\n");
                    break;
                    
                case 2:
                    popval=pop(stack);
                    if (popval == UNDER)
                        printf("\nError: Stack underflow\n");
                    else
                        printf("\nThe popped vaue is: %d\n",popval);
                    break;
                    
                case 3:
                    if(isFull(stack))
                        printf("\nStack is full\n");
                    else
                        printf("\nStack is not full\n");
                    break;
                    
                case 4:
                    if(isEmpty(stack))
                        printf("\nStack is empty\n");
                    else
                        printf("\nStack is not empty\n");
                    break;
            }
        }
        
        else if (choice == 5)
            break;
        
        else
            printf("\nInvalid input\n");
    }
    
    return 0;
}
