#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

void insert_at_begining(struct node *ptr,int data){
    if (ptr == NULL){
        printf("empty list");
        return;
    }
    else{
        struct node * newnode = create_node(data);
        newnode -> next = head -> next;
        head = newnode;
        free(newnode);


    }

}
void delete_element(struct node * ptr,int data){
    if (ptr == NULL){
        printf("empty list");
        return;
    }
    else {
        while (ptr != NULL){
            if (ptr -> next-> data == data){
                ptr 
            }
        }
    }

}


int main(void){
    int choice ;
    while (true){
        printf("1.insertion\n2.deletion\n3.printlist\n4.create list\n5.Exit\nEnter your choice : \n");
        scanf("%d",&choice);
        if (choice == 1){
            printf("1.insertion at the begining\n2.insertion in between\n3.insertion at the end\n enter your choice");
            scanf("%d",&choice);
            if (choice == 1){
                int data ;
                printf("Enter data: ");
                scanf("%d",&data);
                insert_at_begining(head, data);

            }
            else if (choice == 2){
                int pos1,pos2,data;
                printf("enter pos1:");
                scanf("%d",&pos1);
                printf("enter pos2:");
                scanf("%d",&pos2);
                printf("enter the data: ");
                scanf("%d",&data);
                insert_element_in_between(head,data,pos1,pos2);
                printf("Data entry successful");

            }
            else if (choice == 3)
        }
    }
    
}
