#include"stdio.h"
#include"stdlib.h"

typedef struct list
{
	int data;
	struct list *next;
}list;

int main()
{
	int arr[10] = {1,3,5,7,9,11,13,15,17,19};
	
	list h;
	h.data = 0;
	list *head = &h;
	list *p = head;

	for(int i = 0; i< 10; ++i)
	{
		list *a = (list *)malloc(sizeof(list));
		a->data = arr[i];
		a->next = NULL;
		p->next = a;
		p = a;		
	}

	p->next = NULL;

	p = head->next;
/*********以上建立链表存储数据*************/

	printf("input the digit: ");
	int x;
	scanf("%d",&x);
	
	while(p->next && p->next->data < x)
		p = p->next;

	if( p->next )
	{
		list *c = (list*)malloc(sizeof(list));
		c->next = p->next;
		c->data = x;
		p->next = c;
	}
	else
	{	
		list *c = (list*)malloc(sizeof(list));
		c->data = x;
		c->next = NULL;
		p->next = c;
	}

	p = head->next;
	printf("resort data: ");
	while(p)
	{
		printf(" %d ", p->data);
		p = p->next;
	}
	printf("\n");
    return 0;
}
