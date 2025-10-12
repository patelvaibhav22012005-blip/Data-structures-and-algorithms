#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
}node;
struct node * head;
struct node * create_node(int data)
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

void insert_element_in_between(struct node * ptr ,int data,int pos1,int pos2){
    if (ptr == NULL){
        printf("empty list");
        return;
    }
    else{
        while (ptr != NULL){
            if ((ptr -> data == pos1)&&(ptr ->next -> data == pos2)){
                struct node * newnode = create_node(data);
                newnode -> next = ptr -> next;
                ptr -> next = newnode;
                printf("insertion complete");
                free(newnode);

            }
        }
    }
}


