#include <stdlib.h>
#include <stdio.h>
#define Node struct node

Node
{
    int data;
    Node *next;
};

Node *top1 = NULL, *top2 = NULL, *total = NULL;

Node *create_node(int value)
{
    Node *var = (Node *)malloc(sizeof(Node));
    var->data = value;
    return var;
}

void push(int top, int value)
{
    Node *new_data = create_node(value);
    if (top == 1)
    {
        if (!top1)
        {
            new_data->next = NULL;
            top1 = new_data;
        }
        else
        {
            new_data->next = top1;
            top1 = new_data;
        }
    }
    else if (top == 2)
    {
        if (!top2)
        {
            new_data->next = NULL;
            top2 = new_data;
        }
        else
        {
            new_data->next = top2;
            top2 = new_data;
        }
    }
    else
    {
        if (!total)
        {
            new_data->next = NULL;
            total = new_data;
        }
        else
        {
            new_data->next = total;
            total = new_data;
        }
    }
}

int pop(int top)
{
    int data;
    if (top == 1)
    {
        data = top1->data;
        top1 = top1->next;
    }
    else if (top == 2)
    {
        data = top2->data;
        top2 = top2->next;
    }
    else
    {
        data = total->data;
        total = total->next;
    }
    return data;
}

void traverse(int top)
{
    if (top == 1)
    {
        for (Node *var = top1; var != NULL; var = var->next)
        {
            printf("%d", var->data);
        }
    }
    else if (top == 2)
    {
        for (Node *var = top2; var != NULL; var = var->next)
        {
            printf("%d", var->data);
        }
    }
    else
    {
        for (Node *var = total; var != NULL; var = var->next)
        {
            printf("%d", var->data);
        }
    }
}

void big_add()
{
    int size1, size2;
    printf("Size of the size of num1 and num2 : ");
    scanf("%d %d", &size1, &size2);
    printf("Write the two numbers : ");
    char big_num1[size1], big_num2[size2];
    scanf("%s %s", big_num1, big_num2);
    for (int i = 0; i < size1; i++)
    {
        push(1, ((int)big_num1[i] - (int)'0'));
    }
    for (int i = 0; i < size2; i++)
    {
        push(2, ((int)big_num2[i] - (int)'0'));
    }
    if (size1 > size2)
    {
        int remainder = 0;
        while (top2 != NULL)
        {
            int var1 = pop(1), var2 = pop(2), result = var1 + var2 + remainder;
            if (result > 9)
            {
                push(3, result % 10);
                remainder = 1;
            }
            else
            {
                push(3, result);
                remainder = 0;
            }
        }
        while (top1 != NULL)
        {
            if (remainder == 1)
            {
                int result = pop(1) + remainder;
                if (result > 9)
                {
                    push(3, result % 10);
                    remainder = 1;
                }
                else
                {
                    push(3, result);
                    remainder = 0;
                }
            }
            else
            {
                push(3, pop(1));
            }
        }
        if (remainder == 1)
        {
            push(3, 1);
        }
    }
    else if (size1 == size2)
    {
        int remainder = 0;
        while (top2 != NULL)
        {
            int var1 = pop(1), var2 = pop(2), result = var1 + var2 + remainder;
            if (result > 9)
            {
                push(3, result % 10);
                remainder = 1;
            }
            else
            {
                push(3, result);
                remainder = 0;
            }
        }
        if (remainder == 1)
        {
            push(3, 1);
        }
    }
    else
    {
        int remainder = 0;
        while (top1 != NULL)
        {
            int var1 = pop(1), var2 = pop(2), result = var1 + var2 + remainder;
            if (result > 9)
            {
                push(3, result % 10);
                remainder = 1;
            }
            else
            {
                push(3, result);
                remainder = 0;
            }
        }
        while (top2 != NULL)
        {
            if (remainder == 1)
            {
                int result = pop(2) + remainder;
                if (result > 9)
                {
                    push(3, result % 10);
                    remainder = 1;
                }
                else
                {
                    push(3, result);
                    remainder = 0;
                }
            }
            else
            {
                push(3, pop(2));
            }
        }
        if (remainder == 1)
        {
            push(3, 1);
        }
    }
    traverse(3);
}

int main()
{
    big_add();
    return 0;
}