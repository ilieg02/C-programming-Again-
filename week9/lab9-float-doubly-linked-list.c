/*
Program: float-doubly-linked-list.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node
{
    float value;
    struct Node *next;
};

/* Function prototypes */
Node *createNode(float value);
void insertAtFirst(struct Node **head, float value);
void print(Node *head);
void freem(Node *head);

int main(int argc, char *argv[])
{

    int one = atoi(argv[1]);

    Node *head = NULL;

    for (int i = 0; i < one; i++)
    {
        int value = atof(argv[i + 2]);
        insertAtFirst(&head, value);
    }

    print(head);
    freem(head);
    return 0;
}

Node *createNode(float value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtFirst(struct Node **head, float value)
{
    struct Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%.2f\n", temp->value);
        temp = temp->next;
    }
}

void freem(Node *head)
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}