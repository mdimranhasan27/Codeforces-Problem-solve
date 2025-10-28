#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node *next;
};
struct Node* createNode(int value){
    struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
 
}
int main(){
    struct Node *head = NULL,*temp = NULL,*newNode = NULL;
    int i,value;
    for(int i=0;i<5;i++){
        scanf("%d",&value);
        if(head = NULL){
            head = newNode;
            temp = head;

        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    
    }
}
