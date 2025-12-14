#include <stdio.h>
#include <stdlib.h>
#include "../include/linked.h"

int _append(singleLinkedlist *list, int value){
    
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->value = value;
    if(!new_node)return -1;
    if (!list->head){
        list->head = new_node;
        return 0;
    }
    new_node->next = list->head;
    list->head = new_node;
}

int _search(singleLinkedlist *list, int value){
    Node *temp = list->head;
    while (temp)
    {
        if (temp->value == value){
            return 1;
        }
        temp = temp->next;
    }
    return -1;
    
}
int __init__(singleLinkedlist *init){
    init->head = (Node *)malloc(sizeof(init));
    if (init->head == NULL){
        printf("Memory Allocation Failed ");
        return -1;
    }
    init->append = _append;
    init->search = _search;
}