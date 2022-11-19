#include <stdio.h>
#include <stdlib.h>
 #include <bits/stdc++.h> 
using namespace std; 
#include <vector>
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;

//utility function to print contents of 
//a vector from index i to it's end 
void printVector(const vector<int>& v, int i) 
{ 
    for (int j=i; j<v.size(); j++) 
         printf("%d ",v[j]);
    printf("\n"); 
} 

/* To create a node */
void create()
{
    int data;
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
/* Function to search the appropriate position to insert the new node */
void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}
/* To insert a node in the tree */
void insert()
{
    create();
    if (root == NULL) 
        root = temp; 
		 else    
        search(root);   
}
// This function prints all paths that have sum k 
void printKPathUtil(struct btnode *root, vector<int>& path, 
                                           int k) 
{ 
int min=9;
    // empty node 
    if (!root) 
        return; 
  
    // add current node to the path 
    path.push_back(root->value); 
  
    // check if there's any k sum path 
    // in the left sub-tree. 
    printKPathUtil(root->l, path, k); 
  
    // check if there's any k sum path 
    // in the right sub-tree. 
    printKPathUtil(root->r, path, k); 
  
    // check if there's any k sum path that 
    // terminates at this node 
    // Traverse the entire path as 
    // there can be negative elements too 
    int f = 0,count=0; 
    for (int j=path.size()-1; j>=0; j--) 
    { 
        f += path[j]; 
  if (f == k) {
		printVector(path, j);
		min=path.size();
		
		}
        // If path sum is k, print the path 
        if (f == k && path.size()<min&&count==0) {
		printVector(path, j);
		min=path.size();
		
		}
             
    
	count++;} 
  
    // Remove the current element from the path 
    path.pop_back(); 
} 
  
// A wrapper over printKPathUtil() 
void printKPath(struct btnode *root, int k) 
{ 
    vector<int> path; 
    printKPathUtil(root, path, k); 
} 
  // Driver code 
int main() 
{ 
int n;
   printf("Enter number of elements in BST\n");
    scanf("%d",&n);
  for(int i=1;i<=n;i++)
  insert();
  printf("Enter k(sum in BST paths)\n");
    int k;
	scanf("%d",&k); 
    printKPath(root, k); 
  
    return 0; 
} 
