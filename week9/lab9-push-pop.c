/*
Program: lab9-push-pop.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node
{
    int value;
    struct Node *next;
};

/* Function prototypes */
Node *createNode(int value);
void append(struct Node **head, int value);
void deleteFromEnd(Node **head);
void print(Node *head);
void freem(Node *head);

int main(int argc, char *argv[])
{

    int one = atoi(argv[1]);

    Node *head = NULL;

    for (int i = 0; i < one; i++)
    {
        int value = atoi(argv[i + 2]);
        append(&head, value);
    }
    deleteFromEnd(&head);
    deleteFromEnd(&head);

    int on = atoi(argv[argc - 2]);
    int tw = atoi(argv[argc - 1]);
    append(&head, on);
    append(&head, tw);

    print(head);
    freem(head);
    return 0;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void append(Node **head, int value)
{
    Node *newNode = createNode(value);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
}
void deleteFromEnd(Node **head)
{
    Node *temp = *head;

    if (temp->next == NULL)
    {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
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