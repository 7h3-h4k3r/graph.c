#ifndef CLASSLIST_H
#define CLASSLIST_H
typedef struct Node{
    int value;
    struct Node *next;
} Node;

typedef struct singleLinkedlist{
    Node *head;
    int (*append)(struct singleLinkedlist *, int value);
    int (*search)(struct singleLinkedlist *, int value);
}singleLinkedlist;

int __init__(singleLinkedlist *list);
int append(singleLinkedlist *list,int value);
int search(singleLinkedlist *list,int value);
#endif