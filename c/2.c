#include<stdio.h>
#include<stdlib.h>
struct ll_node
{
int key;
struct ll_node *next;
};
typedef struct ll_node node;
int main()
{
  node *head=NULL;
  char inp;
  do
    {
      node *temp;
      temp=(node*)malloc(sizeof(node));
      scanf("%d",&(temp->key));
      temp->next=head;
      head=temp;
      getchar();
      scanf("%c",&inp);
      
      
    }while(inp=='y');
  node *cur;
  cur=head;
  while(cur!=NULL)
    {
      printf("%d",cur->key);
      cur=cur->next;
    }
  return 0;
  
}