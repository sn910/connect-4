#pragma once
#ifndef slist_h
#define slist_h
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

struct Move {
	char player;
	int column;
	struct Move* next;
};

struct singlylinkedlist {
	struct Node* head;
	struct Node* tail;
};

typedef struct singlylinkedlist slist;


void insertAtTail(struct Node** head_ref, int new_data);
void printList(struct Node* node);

#endif /* slist_h */
