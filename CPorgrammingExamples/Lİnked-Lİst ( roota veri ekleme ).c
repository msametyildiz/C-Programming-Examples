#include<stdio.h>
#include<stdlib.h>
struct n{
	int x;
	n *next;
};
typedef n node;
void ekle(node *root,int n){
	while(root->next!=NULL){
		root=root->next;
	}
	root->next=(node*)malloc(sizeof(node));
	root->next->x=n;
	root->next->next=NULL;
}
void bastir(node *root){
	while(root!=NULL){
		printf("%d\t",root->x);
		root=root->next;
	}
}
int main(){
	node *root;
	root=(node*)malloc(sizeof(node));
	root->x=10;
	root->next=NULL;
	for(int i=1;i<6;i++){
		ekle(root,i+10);
	}
	bastir(root);
	return 0;
}
