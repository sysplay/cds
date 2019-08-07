#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;	
	struct node *next;
};


// insert a node
struct node * insert_node(struct node *tail)
{
	struct node *new, *temp;
	new = (struct node*)malloc(sizeof(struct node));
	
	printf("\n Enter data");
	scanf("%d",&new->data);	//new->data is like (*new).data
	
	if(tail == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = tail->next;
		tail->next = new;
	}
	return new;
}

void delete(struct node* p)
{
	struct node* temp;
	if (p!=NULL)
	{
		if(p->next)
		{
			temp = p->next->next;
			free(p->next);
			p->next = temp;
		}
		
	}

}

void displist(struct node* head)
{
	while(head)
	{
		printf("%d\n",head->data);
		head = head->next;
		getchar();
	}
}


int main()
{
	struct node *head, *t, *p;
	
	// to create head
	head = insert_node(NULL);
	
	t = insert_node(head);
	p=t;
	t = insert_node(t);
		
	t = insert_node(t);
	t = insert_node(t);

	printf("list:\n");
	displist(head);
	//free(head);
	//head = p;
	printf("\n\nlist:\n");
	displist(head);
	t->next = p;
	displist(head);

	return 0;
}
