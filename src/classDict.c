#include <stdio.h>
#include "../include/dict.h"
#include "../include/graph.h"


int _insertItem(dict *hashmap , int v){
    dict *newhash = (dict*)malloc(sizeof(dict));
    if (!newhash)return -1;
    newhash->key = v;
    if(hashmap==NULL){
        hashmap = newhash;
        return 0;
    }
    newhash->edge = hashmap;
    hashmap = newhash;
}

int _isIn(graph *g , int v){
    graph *temp = g;
    while (temp)
    {
        if(temp->keys->key == v){
            return 1;
        }
        temp = temp->next;
    }
    return -1;

}

int __init__(dict *hashmap){
    hashmap = (dict*)malloc(sizeof(dict));
    if (hashmap == NULL){
        printf("Memory  Allocation Failed \n");
        return -1;
    }
    hashmap->insertItem  = _insertItem;
    hashmap->isIn = _isIn;
}