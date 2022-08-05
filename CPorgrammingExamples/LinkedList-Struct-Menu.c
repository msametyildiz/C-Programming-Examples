#include<stdio.h>
#include<stdlib.h>
struct data{
	int data;
	struct data *next;
};
typedef data node;
node *head;
node* createList(){
	node *p=NULL;
	int n;
	printf("Haw many data in list : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i==0){
			head=(node*)malloc(sizeof(node));
			p=head;
		}
		else{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}
		printf("please enter the %d. data in list \n",i+1);
		scanf("%d",&p->data);
	}
	p->next=NULL;
	return head;
}
void list(node *head){
	node *p;
	p=head;
	int i=1;
	while(p!=NULL){
		printf("%d- [%d]\n",i,p->data);
		p=p->next;
		i++;
	}
}
node* addnode(){
	int data;
	node *p;
	printf("Please enter the data you want to add : ");
	scanf("%d",&data);
	node *newnode=(node*)malloc(sizeof(node));
	p=head;
	if(head==NULL){
		newnode->data=data;
		newnode->next=NULL;
		head=newnode;
	}
	else{
		while(p->next!=NULL){
			p=p->next;
		}
		newnode->data=data;
		p->next=newnode;
		newnode->next=NULL;
	}
	return head;
}
node* addnodehead(){
	int data;
	node *p=head;
	node *newnode=(node*)malloc(sizeof(node));
	printf("Please enter the data you want to add : ");
	scanf("%d",&data);
	newnode->data=data;
	newnode->next=p;
	head=newnode;
	
	return head;
}
node* deletenode(){
	int data;
	node *q,*p;
	p=head;
	printf("Please enter the data you want to delete :");
	scanf("%d",&data);
	if(p->data==data){
		head=p->next;
		free(p);
	}
	else{
		while(p->next!=NULL && p->data!=data){
			q=p;
			p=p->next;
		}
		if(p->data==data){
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){
			printf("data not found ...!!!");
		}
	}
	return head;
}
node* reversedlist(){
	node *p=NULL;
	node *temp,*q;
	q=head;
	while(q!=NULL){
		temp= q->next;
		q->next=p;
		p=q;
		q=temp;
	}
	head=p;
	printf("operation is done...\n");
	return head;
}
int main(){
	node *head;
	int selection;		
	printf("1. Create List\n2. Traverse List\n3. Add Node (last)\n4. Add Node (first)\n5. Delete Node\n6- Reversed list\n7. Exit\n");
	while(1){
		printf("selection [1-6] ? :");
		scanf("%d",&selection);
		switch(selection){
			case 1:
				head=createList();break;
			case 2:
				list(head);break;
			case 3:
				head=addnode();break;
			case 4:
				head=addnodehead();break;
			case 5:
				head=deletenode();break;
			case 6:
				head=reversedlist();break;
			case 7:exit(0);
		}
	}
}
