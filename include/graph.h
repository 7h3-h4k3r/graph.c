#ifndef GRAPH_H 
#define GRAPH_H

#include "../include/linked.h"

#include "../include/dict.h"

typedef struct vertex{
  dict *v;
  node *next;
}vertex;

typedef struct graph
{
  vertex *v;
  int (*addvertex)(struct graph *,int);
}graph;

int addvertax(graph,int);

#endif 
