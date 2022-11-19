#include<stdio.h>
#include<cstdlib>
#define nullptr NULL  
 struct btnode
  { 
	int data; 
	btnode *l, *r; 
	btnode(int x) 
	{ 
		data = x; 
		l = nullptr;
		r = nullptr; 
	} 
};  
btnode* insert(btnode* r, int a) 
{ 
	if (r == nullptr) 
	{
		return new btnode(a); 
	}
	if (a < r->data) 
	{
		r->l = insert(r->l, a); 
	}
	else if (a > r->data) 
	{
		r->r = insert(r->r, a); 
	}
	return r; 
} 
btnode* ksmallest(btnode* r, int& b) 
{  
	if (r == nullptr) 
	{
		return nullptr; 
	}
btnode* l = ksmallest(r->l, b); 
if (l != nullptr) 
{
		return l; 
	}
b--; 
	if (b == 0) 
	{
		return r; 
	}
return ksmallest(r->r, b); 
} 
int kelement(btnode* r, int b) 
{  
	int count = 0; 
	btnode* res = ksmallest(r, b); 
		 return res->data;
} 
int main() 
{ 
	btnode* r = NULL; 
	int a[] = { 8,7,10,2,9,13 }; 
int sum=0;
	for (int i=0;i<6;i++) 
		r = insert(r, a[i]); 
int k = 1; 
printf("First, third and fifth smallest element-");
	printf("%d,",kelement(r, k)) ;
	sum=sum+kelement(r, k);
	k = 3;
	printf("%d,",kelement(r, k)) ;
	sum=sum+kelement(r, k);
	k = 5; 
	printf("%d\n",kelement(r, k)) ;
	sum=sum+kelement(r, k);
	printf("Sum of these elements (Output)  :%d\n",sum);
	return 0; 
} 

