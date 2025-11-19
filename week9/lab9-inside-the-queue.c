/*
Program: lab9-inside-the-queue.c
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
void append(Node **head, int value);
void inserta(Node *head, int number, int inserter);
void print(Node *head);
void freem(Node *head);

int main(int argc, char *argv[])
{

    int number = atoi(argv[1]);
    int inserter = atoi(argv[2]);

    int numbers[] = {8, 7, 3, 4, 5, 6, 9, 2, 14, 12};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    Node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        append(&head, numbers[i]);
    }

    inserta(head, number, inserter);

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

void inserta(Node *head, int number, int inserter)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == number)
        {
            Node *newNode = createNode(inserter);
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    }
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
