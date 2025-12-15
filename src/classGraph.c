#include "../include/graph.h"
#include<stdlib.h>

int _addvertex(graph **g , int v){
    printf("%d ",(*g)->keys->isIn((*g)->keys,v));
}

void __init__graph__(graph *obj){
    graph *g;
    g = (graph *)malloc(sizeof(graph));
    if (g==NULL && g->keys == NULL){
        printf("Memory allocation Failed %s",__func__);
        return -1;
    }
    __init__(*g->keys);
    g = obj;
    g->addvertex  = _addvertex; 
}
