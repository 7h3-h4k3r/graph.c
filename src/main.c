#include <stdio.h>
#include "../include/linked.h"
int main(){
    singleLinkedlist head;
    __init__(&head);
    head.append(&head,10);
    head.append(&head,20);
    printf("%d ",head.search(&head,10));

}