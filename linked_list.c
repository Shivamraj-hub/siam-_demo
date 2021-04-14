#include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *lnk;
}node;

int main()
{
	struct node *head, *cnode, *pnode;
	int i,n,infn;
	cnode = (struct node *)malloc(sizeof(node));
	printf("ENTER the data value : ");
	scanf("%d", &infn);
	if (cnode == NULL)
	{
		printf("memory is not allocated!!!!");
		//break;
	}
	else
	{
		cnode->data = infn;
		cnode -> lnk = NULL;
		head = cnode;
		pnode = cnode;
	}
	
	printf("how many nodes you want to add ? ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		cnode = (struct node *)malloc(sizeof(node));
		printf("enter data : ");
		scanf("%d", &infn);
		
		cnode -> data = infn;
		cnode -> lnk = NULL;
		pnode -> lnk = cnode;
		pnode = cnode;
	}
	pnode = head;
	while(cnode->lnk != NULL)
	{
		printf("%d", cnode ->data);
		cnode = cnode -> lnk;
	}
	return 0 ;
}