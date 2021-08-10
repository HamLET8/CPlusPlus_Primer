#include"stdio.h"
#include"stdlib.h"

typedef struct list
{
	int seq;
	char stat;	//status	
	struct list* next;
}list;

int n = 0;

void findSeq(list *h, int kk, int mm)
{
	list *t = h;
	while(t->seq != kk)
		t = t->next;

	list* prev = t; 
	for(int i = 0; i < n ; ++i)
	{
		int cnt = mm;
//		int stop = n;
		while(cnt)
		{
			if(!t->stat)
			{
				--cnt;
			}
			prev = t;
			t = t->next;
//			--stop;
		}
	
		printf(" %d ",prev->seq);
		prev->stat = 1;

	}
	printf("\n");

	
}

int main()
{
	printf("plz input n: ");
	scanf("%d",&n);


	list *head = (list *)malloc(sizeof(list));
	head->seq = 1;
	head->next = head;
	list *p = head;

	printf("before into loop \n ");

	for(int i = 1; i < n; ++i)
	{
		list *node = (list *)malloc(sizeof(list));
		node->seq = i+1;
		p->next = node;
		p = p->next;
	}	

	printf("finished loop \n ");
	p->next = head;

	
	printf("plz input k and m: ");
	int k,m;
	scanf("%d %d",&k,&m);

	findSeq(head,k,m);	
	
	p = head;
	for(int i = 0; i < n; ++i)
	{
		p = head->next;
		free(head);
		head = p;
	}

		

    return 0;
}
