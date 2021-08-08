#include <stdlib.h>
#include "../include/linked_list.h"

node_t  *list_create(void *data)
{
    node_t * newList = malloc(sizeof(node_t));
    if (!newList)
    {
        return NULL;
    }
    newList->data = data;
    newList->next = NULL;
    return newList;
}


void    list_destroy(node_t **head, void (*fp)(void *data))
{
    node_t *p = *head;
    while(p)
    {
        free(p);
        p = p->next;
    }
}

void    list_push(node_t *head, void *data)
{
    node_t *curr = NULL;
    if (head->next == NULL)
    {
        head->next = list_create(data);
    }
    else 
    {
        curr = head;
        while (curr->next!=NULL)
        {
            curr = curr->next;
        }
        curr->next = list_create(data);
    }
}
void    list_unshift(node_t **head, void *data)
{
    node_t *newHead = list_create(data);
    newHead->next = *head;
    newHead->data = data;
}

void    *list_pop(node_t **head)
{
    node_t *current = *head;
    node_t *prev;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }

    prev->next = NULL;
    free(current);
}

void    *list_shift(node_t **head)
{
    node_t *curr = head;
    curr->next = NULL;
    free(curr);   
}
void    *list_remove(node_t **head, int pos)
{
    int i = 0;
    node_t *atPos = head;
    node_t *prev = NULL;
    while (i != pos)
    {
        i++;
        prev = atPos;
        atPos = atPos->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
        free(atPos);
    }
}

void    list_print(node_t *head)
{
    node_t *node = head;
    while (node != NULL)
    {
        printf("%s", node->data);
        node = node->next;
    }
}
void    list_visitor(node_t *head, void (*fp)(void *data))
{
    node_t *node = head;
    while (node != NULL)
    {
        fp(node->data);
        node = node->next;
    }
}
