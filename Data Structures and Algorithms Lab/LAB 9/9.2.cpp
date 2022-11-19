// C implementation to find leaf count of a given Binary tree 
#include <stdio.h> 
#include <stdlib.h> 
  #include <math.h>
/* A binary tree node has data, pointer to left child  
   and a pointer to right child */
struct node  
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 
  
/* Function to get the count of leaf nodes in a binary tree*/
int getLeafCount(struct node* node) 
{ 
  if(node == NULL)        
    return 0; 
  if(node->left == NULL && node->right==NULL)       
    return 1;             
  else 
    return getLeafCount(node->left)+ 
           getLeafCount(node->right);       
} 
  /* Computes the number of non-leaf nodes in a tree. */
int countNonleaf(struct node* node) 
{ 
    // Base cases. 
    if (node == NULL || (node->left == NULL &&  
                         node->right == NULL)) 
        return 0; 
  
    // If root is Not NULL and its one of its 
    // child is also not NULL 
    return 1 + countNonleaf(node->left) +  
               countNonleaf(node->right); 
} 
/* Helper function that allocates a new node with the 
   given data and NULL left and right pointers. */
struct node* newNode(int data)  
{ 
  struct node* node = (struct node*) 
                       malloc(sizeof(struct node)); 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
    
  return(node); 
} 
  
/*Driver program to test above functions*/  
int main() 
{ 
  /*create a tree*/  
  struct node *root = newNode(1); 
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  root->left->left  = newNode(4); 
  root->left->right = newNode(5);     
    root->right->left=newNode(6);
    root->right->right=newNode(7);
  /*get leaf count of the above created tree*/
  printf("Leaf count of the tree is %d\n", getLeafCount(root)); 
   printf("Internal nodes of the tree is %d\n", countNonleaf(root)-1); 
   int sum=getLeafCount(root)+countNonleaf(root);
   int height=ceil(log2(sum + 1)) - 1;
   printf("Total Nodes of the tree is %d\n",sum);
   printf("Height of the tree is %d\n",height);
  getchar(); 
  return 0; 
} 
