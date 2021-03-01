#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL; //Global Variable
void print()
{
	if(head->next==NULL) 
	{
		printf("List is Empty");
		return ;
	}
	else 
	{
		struct node* temp;
		temp=head;
		printf("(Adress of Node,Value of Node,Adress of next Node)\n");
		while(temp!= NULL )
		{
			printf(" (%u,%d,%u)\n",(&(temp->data)),temp->data,temp->next);
			temp = temp->next;
		}
		printf("\n");
	}
}
void insert_front()
{
        struct node* new_n=(struct node*)malloc(sizeof(struct node));  //New Node
        printf("Enter a value\n");
        int val;
        scanf("%d",&val);
        new_n->data=val;
        new_n->next=head; //assigning adress of previous one to next
        head=new_n;
}
void insert_last()
{
    struct node* new_n=(struct node*)malloc(sizeof(struct node));
    struct node* last=head;
    printf("Enter a value\n");
    int val;
    scanf("%d",&val);
    new_n->data=val;
    new_n->next=NULL;
    if(head==NULL) head=new_n;
    else
    {
        while(last->next!= NULL ) last=last->next;
    }
    last->next=new_n;
}
void delete_front()
{
    if(head==NULL) printf("List is Empty");
    head=head->next;
}
void delete_last()
{
    struct node* last=head;
    if(last==NULL) printf("List is Empty");
	else if(last->next!=NULL) delete_front();
    else
    {
        struct node* p;
        while(last->next!= NULL ){
            p=last;
            last=last->next;
        }
        p->next=NULL;
    }
    free(last);
}
void insert_bv(int x)
{
  struct node* new_n=(struct node*)malloc(sizeof(struct node));
  printf("Enter a value\n");
  int val,f=0;
  scanf("%d",&val);
  new_n->data=val;
  struct node* temp=head;
  struct node* prev=temp;
  while(temp->data!=x)
  {
    prev=temp;
    temp=temp->next;
    if(temp->data==x) f=1;
  }
  if(f==1)
  {
      prev->next=new_n;
      new_n->next=temp;
  }
  else if(head->data==x) {
      new_n->next=head;
      head=new_n;
  }
  else printf("Value Not Found\n");
}
void insert_after_value(int x) {
  struct node* new_n=(struct node*)malloc(sizeof(struct node));
  printf("Enter a value\n");
  int val,f=0;
  scanf("%d",&val);
  new_n->data=val;
  if(head->data==x) 
  {
      temp=temp->next;
      head->next=new_n;
      new_n->next=temp;
	  return ;
  }
  struct node* temp=head;
  struct node* prev;
    while(temp->data!=x)
        {
            prev=temp;
            temp=temp->next;
            if(temp->data==x) f=1;
        }
    if(f==1)
    {
        prev->next=new_n;
        new_n->next=temp;
    }
    else printf("Value Not Found\n");

}
void delete_bv(int x)
{
  int f=0;
  struct node* temp=head;
  struct node* prev;
    while(temp->data!=x) {
            prev=temp;
            temp=temp->next;
            if(temp->data==x) f=1;
        }
        if(f==1) {
        temp=temp->next;
        prev->next=temp;
        }
        else if(head->data==x) {
            head=head->next;
            free(temp);
        }
        else printf("Value Not Found\n");
}
void reverse() {

    if( head==NULL || head->next == NULL ) return head;
    node *prev=NULL,*cur=head,*ne=NULL;
    while(cur)
    {
        ne = cur->next;
        cur->next=prev;
        prev=cur;
        cur=ne;
    }
    return prev;
}
void main ()
{
    int k;
    do {
            printf("Enter 1->Insert front 2->Insert at Last 3->Delete from front 4->Display: 5->delete from end \n");
            printf("6->Insert by value(before) 7->Insert After Value 8->Delete by value 9->Reverse 10->Exit \n");
            scanf("%d",&k);
            if (k==1)
                insert_front();
            else if (k==2)
                insert_last(head);
            else if (k==3)
                delete_front();
            else if(k==4)
                print();
            else if(k==5)
                delete_last();
            else if(k==6) {
                int val;
                printf("Enter value of operation");
                scanf("%d",&val);
                insert_bv(val);
            }
            else if(k==7) {
                int val;
                printf("Enter value of operation");
                scanf("%d",&val);
                insert_after_value(val);
            }
            else if(k==8) {
                int val;
                printf("Enter value of operation");
                scanf("%d",&val);
                delete_bv(val);
            }
			else if (k==9) {
				reverse();
			}
    }while(k!=10);
}
