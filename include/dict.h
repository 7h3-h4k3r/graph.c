#include "../include/linked.h"

typedef struct dict{
  int key;
  Node *edge;

  int (*insertItem)(struct dict *, int v);
  int (*isIn)(struct graph *, int v)
}dict;
int isIn(dict,int);
int __init__(dict d);
int insertItem(graph ,int);

