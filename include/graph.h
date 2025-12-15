#ifndef GRAPH_H 
#define GRAPH_H

#include "../include/linked.h"

#include "../include/dict.h"



typedef struct graph
{
  dict *keys;
  int (*addvertex)(struct graph *,int);
}graph;

int addvertex(graph *g,int);

#endif 
