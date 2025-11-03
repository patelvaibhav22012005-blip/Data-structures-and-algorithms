#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// defining structure for linked list
struct node {
    int data;
    struct node * next;
}node;
struct node * head;
// creating a node 
struct node * create_node(int data)
{
    struct node * newnode = malloc(sizeof (struct node));
    newnode -> data = data;
    newnode -> next = NULL;
    return newnode;
}
//print the list
void print_list(struct node * ptr){
    if (ptr == NULL){
        printf("empty list");
        return;
    }
    else{
        printf("The list is : ");
        while(ptr != NULL){
            
            printf("%d",ptr -> data);
            if (ptr -> next != NULL){
                printf(" -> ");
            }
            ptr = ptr -> next;
            
        }
        printf("\n");
    }
}
// insert element in between of linked list
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

// insert element in begining of linked list
struct node * insert_at_begining(struct node *ptr,int data){
    if (ptr == NULL){
        printf("empty list");
        
    }
    else{
        struct node * newnode = create_node(data);
        newnode -> next = head;
        return newnode;
        
        


    }

}

// deleting an element from the list
void delete_element(struct node * ptr,int data){
    if (ptr == NULL){
        printf("empty list");
        return;
    }
    else {
        while (ptr != NULL){
            if (ptr -> next-> data == data){
                
            }
        }
    }

}

// inserting an element at the end of list

void insert_at_end(struct node * ptr,int data){
    if (ptr == NULL){
        printf("List not found");
        return;
    
    }
    else{
        while (ptr -> next != NULL){
            ptr = ptr -> next;
        }
        struct node * newnode = create_node(data);
        ptr -> next = newnode;
        free(newnode);
        printf("Element inserted successfully!!");

    }
}


int main (void){
    int ch = 0;
    int data;
    while (true)
    {
        printf("\n1.Create a linked list\n");
        printf("2.Insert element to the list\n");
        printf("3.Delete element from the list\n");
        printf("4.Search for an element in the list\n");
        printf("5.Print the list\n");
        printf("6.Exit\n ");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if (ch == 1){
            int choice = 1;
            printf("Enter data: ");
            scanf("%d",&data);
            head = create_node(data);
            struct node * temp = head;
            while (choice == 1){
                printf("Do you want to add more elements to the list : 1. yes , 2. no : \n");
                if (scanf("%d",&choice)== 1){
                    if  (choice == 1){
                        printf("enter data: ");
                        scanf("%d",&data);
                        struct node * newnode = create_node(data);
                        temp -> next = newnode;
                        temp = newnode;
                    }
                    else {
                        choice = 0;
                    }
                
                }
                else {
                    printf(" invalid input format !! try again ");
                }

            }
            
        }
        else if (ch == 2 ){
            int a = 0;
            printf("1.Insert element in begining of the list \n");
            printf("2.Insert element in between of the list \n ");
            printf("3.Insert element at the end  of the list \n");
            printf("enter your choice : ");
            scanf("%d",&a);
            if (a == 1){
                int d;
                printf("\nEnter data:");
                scanf("%d",&d);
                head = insert_at_begining(head,d);
            }
            else if (a == 2){
                printf("The current list: ");
                print_list(head);
                printf("\nEnter the position and data to be inserted:\n");

                int pos1,pos2,data;
                printf("Enter pos1:");
                scanf("%d",&pos1);
                printf("\nenter pos 2:");
                scanf("%d",&pos2);
                printf("\nenter data:");
                scanf("%d",&data);
                insert_element_in_between(head,data,pos1,pos2);
                
            }
            else if ( a == 3){
                int d ;
                printf("Enter data:");
                scanf("%d",&d);
                insert_at_end(head,d);
            }

        }
        else if (ch == 5){
            print_list(head);


        }
        else if (ch == 6){
            break;
        }


    }

        

        
}
    
