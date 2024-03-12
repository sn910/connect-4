#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "slist.h"


void insertAtTail(struct Node** head_ref, int new_data) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node)); // allocate memory for the new node
    struct Node* last = *head_ref; // temporary pointer to traverse the list
    new->data = new_data; // set the data for the new node
    new->next = NULL; // since the new node will be the last node, set its next pointer to NULL
    if (*head_ref == NULL) {  // if the list is empty, make the new node the head of the list
        *head_ref = new;
        return;
    }
    while (last->next != NULL) {  // traverse the list to find the last node
        last = last->next;
    }
    last->next = new; // set the next pointer of the last node to the new node
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
