#include<stdio.h>
#include<stdlib.h>
struct student{
	int x;
	student *next;
};
typedef student node;

void bastir(node *root){
	while(root!=NULL){
		printf("%d\t",root->x);
		root=root->next;
	}
}	
node* ekleSirali(node *root,int n){
	if(root==NULL){
		root=(node*)malloc(sizeof(node));
		root->next=NULL;
		root->x=n;
		return root;
	}
	if(root->x > n){// ilk elemeandan kucuk olma durumu       root degisiyor
		node *temp=(node*)malloc(sizeof(node));
		temp->x=n;
		temp->next=root;
		return temp;
	}
	node *iter=root;
	while(iter->next!=NULL && iter->next->x<n){
		iter=iter->next;
	}
	node* temp=(node*)malloc(sizeof(node));
	temp->next=iter->next;
	iter->next=temp;
	temp->x=n;
	return root;
}
int main(){
	node *root;
	root=NULL;
	root= ekleSirali(root,400);
	root= ekleSirali(root,40);
	root= ekleSirali(root,4);
	root= ekleSirali(root,500);
	root= ekleSirali(root,50);
	bastir(root);
	return 0;
}
