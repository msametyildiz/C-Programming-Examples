															Linked list first lectures
#include<stdio.h>
#include<stdlib.h>
typedef struct n{
	int x;
	n *next;
}node;
int main(){
	node *root;
	root=(node*)malloc(sizeof(node));
	root->x=10;
	root->next=(node*)malloc(sizeof(node));
	root->next->x=20;
	root->next->next=(node*)malloc(sizeof(node));
	root->next->next->x=30;
	root->next->next->next=NULL;//  burada son basamaga null vererek hata almamamýzý sagliyoruz
	node *iter;  
	iter=root;
	while(iter->next!=NULL){
		printf("%d\n",iter->x);
		iter=iter->next;
	}
	return 0;
}
--------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
typedef struct n{
	int x;
	n *next;
}node;
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
	root->next=(node*)malloc(sizeof(node));
	root->next->x=20;
	root->next->next=(node*)malloc(sizeof(node));
	root->next->next->x=30;
	root->next->next->next=NULL;//  burada son basamaga null vererek hata almamamýzý sagliyoruz
	node *iter;  
	iter=root;
	while(iter->next!=NULL){
		printf("%d\n",iter->x);
		iter=iter->next;
	}
	// listelerin sonunda yani sira ekleme
	for(int i=1;i<5;i++){
		iter->next=(node*)malloc(sizeof(node));
		iter=iter->next;
		iter->x=i*10;
		iter->next=NULL;
	}
	bastir(root);
	return 0;
}
---------------------------------------------
						root a veri ekleme
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
---------------------------------------
										istenilen bir yere bir eleman ekleme
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
	printf("\n");
	node *iter=root;
	//burada 3.siraya bir degisken eklemek istiyorum
	for(int i=0;i<1;i++){// burada bir yapmamýn nedeni root zaten birinci eleman onu üç kez ilerletirsem 4. sýradakine eklemis olurum
		iter=iter->next;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->next=iter->next;
	iter->next=temp;
	temp->x=1000;
	bastir(root);
	return 0;
}
---------------------------------------------
																kücükten büyüge dogru siralama
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
