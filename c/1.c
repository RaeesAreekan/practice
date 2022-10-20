#include<stdio.h>
#include<stdlib.h>
struct point
{
    int xc;
    int yc;
    struct point *next;
};
typedef struct point node;
int main()
{
    node *head=NULL;
    char inp;
    do
    {
        node *temp;
        temp=(node*)malloc(sizeof(node));
        scanf("%d %d",&(temp->xc),&(temp->yc));
        temp->next=head;
        head=temp;
        getchar();
        
        scanf("%c",&inp);    
    }while(inp=='y');
    node *curr=head;
    while(curr!=NULL)
    {
        printf("%d %d\n",curr->xc,curr->yc);
        curr=curr->next;
    }
    return 0;
    }
    

    

