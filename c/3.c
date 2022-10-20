#include<stdio.h>          //I believe my logic is correct.Howewer it is having an error
#include<stdlib.h>
struct ll_node
{
int key;
struct ll_node *next;    
};
typedef struct ll_node node;   // defining new datatype
node *move_front(node *head)   // creating new function as required in the question.
{
  int inp;
  while(1)
    {
      node *temp;
      
       scanf("%d",&inp);
      if(inp==-1)
        break;
      temp=(node*)malloc(sizeof(node));
      temp->key=inp;
      temp->next=head;     //storing each value in a linked list
      head=temp;
      getchar();
  
      
      
      }
  int l=0,min=head->key,ind=0,k=0;
  node *cur,*tim,*yes;
  *cur=*head; 
  *tim=*head;
  *yes=*head; //creating duplicates of final pointer
  while(cur!=NULL)
    
    
  {
    if((cur->key)<=min)
    {
      ind=l;      //finding the min key value in the linked list
      min=cur->key;
      
    }
    cur=cur->next;
    l++;    //finding corresponding length oflinked list
    }
    while(k<=l)
    {
        yes=yes->next;
        k++;



    }
    
    int y=ind,s=0;
  while(s<(y-1))
    {
      tim=tim->next;  //finding the node just after the minimum  node
    s++;
    }
  node *ye,*tm;
  *ye=*tim;
  
  
  tm=ye->next;  //storing the min node
  ye=ye->next;
  ye=ye->next;  //storing the node bfore min node
  tim->next=ye;   //joining the node before and just after
  tm->next=NULL; //putting *next of min key as NULL
  yes->next=tm;   //putting the min  as the first node
  
  
   
    
    
    
    
      
    }
  
  
  
  

int main()
{
  node *head=NULL;
  move_front(head);  //calling the function
  int f=0;
  while(1)
    {
      int y=head->key;    //traversing through the linked list
      if(head==NULL)
        break;
      printf("%d",y);   //printing the new order
      head=head->next;
      
    }
  return 0;
  
  
  
  
    
  
  
}
