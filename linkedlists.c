#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
}node;
struct node * head;
struct node * create_node(struct node * ptr,int data)
{
    struct node * newnode = malloc(sizeof (struct node));
    newnode -> data = data;
    newnode -> next = NULL;
    return newnode;
}

void print_list(struct node * ptr){
    if (ptr == NULL){
        printf("empty list");
        return;
    }
    else{
        while(ptr != NULL){
            printf("%d",ptr -> data);
            ptr = ptr -> next;
        }
    }
}

//hi 

