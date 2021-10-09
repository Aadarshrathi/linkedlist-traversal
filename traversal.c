#include<stdlib.h>
#include<stdio.h>

struct Node {
  int data ; 
  struct Node*next;
};
void linkedListTraversal(struct Node*ptr){
  while(ptr!=NULL)
  {
  printf("%d\n",ptr->data);
  ptr=ptr->next;
}
}
int main(){
  struct Node * head;
struct Node * second;
struct Node * third;
  //alocate memory for nodes in linked in heap
  head = (struct Node *)malloc(sizeof (struct Node));
second = (struct Node *)malloc(sizeof (struct Node));
third= (struct Node *)malloc(sizeof (struct Node));

head->data=7;
head->next=second;

second->data=11;
second->next=third;

third->data=15;
third->next=NULL;
linkedListTraversal(head);
 return 0;
}
