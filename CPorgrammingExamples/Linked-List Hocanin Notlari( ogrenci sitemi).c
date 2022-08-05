#include<stdio.h>
#include<stdlib.h>
struct student{
	int no;
	char name[40];
	int age;
	struct student *next;
};
typedef struct student node;
node *head,*newnode;

node* createlist(){
	int k,n;
	node *head,*p;
	printf("how many students in the list : ");
	scanf("%d",&n);
	for(k=0;k<n;k++){
		if(k==0){
			head=(node*)malloc(sizeof(node));
			p=head;
		}
		else{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}
		printf("enter %d. student number :",k+1);scanf("%d",&p->no);
		printf("enter %d. student name :",k+1);scanf("%s",p->name);
		printf("enter %d. student age :",k+1);scanf("%d",&p->age);
	}
	p->next=NULL;
	return head;
}
void traverselist(node *head){
	int counter=1;
	node *p;
	p=head;
	while(p!=NULL){
		printf("%d- %d %s %d\n",counter,p->no,p->name,p->age);
		p=p->next;
		counter++;
	}
}
node* addnode(node* head){
	int stdno;
	node *p,*q;
	node *newnode=(node*)malloc(sizeof(node));
	printf("Enter new strudent number : ");scanf("%d",&newnode->no);
	printf("Enter new strudent name : ");scanf("%s",newnode->name);
	printf("Enter new strudent age : ");scanf("%d",&newnode->age);
	printf("Enter std number that new record will be added before :  \n");
	printf("Press 0 to add to the end of list\n");
	scanf("%d",&stdno);
	p=head;
	if(p->no==stdno){// add to beginning
		newnode->next=p;
		head=newnode;
	}
	else{
		while(p->next!=NULL && p->no!=stdno){
			q=p;
			p=p->next;
		}
		if(p->no==stdno){ // add nor beginning neigher end
			q->next=newnode;
			newnode->next=p;
		}
		else if(p->next==NULL){  // add to end
			p->next=newnode;
			newnode->next=NULL;
		}
	}
	return head;
}
node* deletenode(node *head){
	int stdno;
	node *p,*q;
	printf("Enter student number that will be deleted ? :");
	scanf("%d",&stdno);
	p=head;
	if(p->no==stdno){ // delete node at the beginning
		head =p->next;
		free(p);
	}
	
	
	else{
		while(p->next!=NULL && p->no!=stdno){
			q=p;
			p=p->next;
		}
		if(p->no==stdno){//delete from nor beginner neigther end
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){// no node found to delete
			printf("no node found to delete ");
		}
	}
	return head;
}
int main(){
	node *head;
	int selection=0;
	printf("1. Create List\n2. Traverse List\n3. Add Node\n4. Delete Node\n5. Exit\n");
	while(1){
		printf("Selection ? [1-5]  : ");
		scanf("%d",&selection);
		switch(selection){
			case 1:
				head=createlist();printf("Adres : %x\n",head);
				traverselist(head);break;
			case 2:
				traverselist(head);break;
			case 3:
				head=addnode(head);
				traverselist(head);break;
			case 4:
				head=deletenode(head);
				traverselist(head);break;
			case 5: exit(0);
		}
	}
	return 0;
}
