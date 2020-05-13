#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stone
{
  int stone_number;
  struct stone *link;
};

void addatbeg(struct stone**head, int v);
void display(struct stone* head);

int main()
{
  int v,count=0;
  struct stone *head;
  head=NULL;
  int choice=1;
	
	while(choice!=3)
	{
	printf("1.Add a stone\n2.View stones\n3.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice){
		    case 1:
			    printf("Enter the stone\n");
			    scanf("%d",&v);
			    count++;
			    addatbeg(&head,v);
			    break;

		    case 2:if(count==0)
		    printf("No stones were added\n");
		       else
		       {
		           printf("Stones are:\n");
		       
			    display(head);
		       }
			    break;

		    case 3:
			    printf("Exit\n");
			    break;

		    default:
			    printf("Enter a valid choice\n");
			}
		}
	return 0;
}

void addatbeg(struct stone**head, int v)
{

	struct stone *nnew;
	nnew=(struct stone *)malloc(sizeof(struct stone));
	nnew->link=NULL;
	nnew->stone_number=v;
	
	if(head==NULL)
	*head=NULL;
	else
	{
	    nnew->link=*head;
	    *head=nnew;
	}
}

void display(struct stone* head)
{
	
	struct stone *temp=head;
	while(temp!=NULL)
	{
	    printf("%d ",temp->stone_number);
	    temp=temp->link;
	}
	printf("\n");
	
	
}
