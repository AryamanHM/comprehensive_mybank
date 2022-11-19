// Program to perform 2 functions on a matrix
// 1. find if user input value is in matrix
// 2. find if the matrix is a magic square
#include <iostream>
using namespace std;

// create a sum variable to compare with the sum of,
// rows columns, and diagonals
int sum = 0, m;

//defining node structure
struct node
{
  int data;
  node *right, *down;
};

//function to intake a new node
node* newNode(int d)
{
  node* temp = new node;
  temp->data = d;
  temp->right = temp->down = NULL;
  return temp;
}

//function to check if the matrix
//given is a magic square or Not
//note: pointers not used for this function
bool magic(int mat[][5])
{
  int i, j, sumc, sumdl = 0, sumdr = 0, sumr;
  for(i = 0; i < m; i++)
  {
    sumr = 0;
    for(j = 0; j < m; j++)
      sumr += mat[i][j];
    if(sumr != sum)
      return false;
  }
  for(j = 0; j < m; j++)
  {
    sumc = 0;
    for(i = 0; i < m; i++)
      sumc += mat[i][j];
    if(sumc != sum)
      return false;
  }
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < m; j++)
      if(i == j)
        sumdl += mat[i][j];
  }
  if(sumdl != sum)
    return false;
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < m; j++)
      if(i + j == m - 1)
        sumdr += mat[i][j];
  }
  if(sumdr != sum)
    return false;

  return true;
}

//function to find user input value in matrix
int duplicatevalue(node* head, int v)
{
  node *rp, *dp = head;
  int f = 0;
  while (dp)
  {
    rp = dp;
    while (rp)
    {
      if (rp->data == v)
      {
        f = 1;
        break;
      }
      rp = rp->right;
    }
    dp = dp->down;
  }
  return f;
}

//function to create a linked list with the 2d array
node* constructLinkedMatrix(int mat[][5], int m)
{
  node* mainhead = NULL;
  node* head[m];
  node *righttemp, *newptr;
  for (int i = 0; i < m; i++)
  {
    head[i] = NULL;
    for (int j = 0; j < m; j++)
    {
      newptr = newNode(mat[i][j]);
      if (!mainhead)
        mainhead = newptr;
      if (!head[i])
        head[i] = newptr;
      else
        righttemp->right = newptr;
      righttemp = newptr;
    }
  }
  for (int i = 0; i < m - 1; i++)
  {
    node *temp1 = head[i], *temp2 = head[i + 1];
    while (temp1 && temp2)
    {
      temp1->down = temp2;
      temp1 = temp1->right;
      temp2 = temp2->right;
    }
  }
  return mainhead;
}

//main functions
int main()
{
    int mat[5][5], v, d;
    cout<<"Enter number of rows and columns: ";
    cin>>m;
    for(int i = 0; i < m; i++)
    {
      for(int j = 0; j < m; j++)
      {
        cin>>mat[i][j];
        sum += mat[i][j];
      }
    }
    node* head = constructLinkedMatrix(mat, m);
    sum /= m;
    cout<<"Enter value which you want to check in matrix: ";
    cin>>v;
    d = duplicatevalue(head,v);
    if(d)
      cout<<"Yes, there is 1 duplicate.\n";
    else
      cout<<"No, there is no duplicate.\n";
    if(magic(mat))
      cout<<"Magic Square\n";
    else
      cout<<"Not Magic Square\n";
    return 0;
}
