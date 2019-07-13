#include<bits/stdc++.h>
using namespace std;
void permutation(string str,int start,int end)
{
  if(start == end)
    cout<<str<<endl;
  else
  {
    for(int i=start ; i<=end ; i++)
    {
      swap(str[start],str[i]);
      permutation(str,start+1,end);// Recursion
      swap(str[start],str[i]);//Backtrack
    }
  }
}

int main()
{
  string a = "ABC";
  int n = a.size();
  permutation(a,0,n-1);
  return 0;
}
/************************************************************

points to remember
1. we are using a tree like structure concept.
2. (root-left-right) traversal, preorder type we are using for traversing.
3. Here we use backtracking using recursion, and this is not a dynamic programming.
4. we will print all leaf node, in other words we will print when we encounter with the length of string - 1,
   for example if string length is 3, when we meet 2char then we will print.

ITERATION EXPLANATION
----------------------
permutation(str,0,2)
{
  for(i=0;i<=2;i++)
  {
      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~when i=0
      swap(0,0)
      permutation(str,1,2)
      {
          for(i=1,i<=2;i++)
          {
            ~~~~~~~~~~~~~~~~~~~~~when i=1
            swap(1,1)
            permutation(str,2,2)
            {
                print(str);
            }
            swap(1,1)
            ~~~~~~~~~~~~~~~~~~~~~when i=2
            swap(1,2)
            permutation(str,2,2)
            {
                print(str);
            }
            swap(1,2)
          }
      }
      swap(0,0)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~when i=1
      swap(0,1)
      permutation(str,1,2)
      {
          for(i=1,i<=2;i++)
          {
            ~~~~~~~~~~~~~~~~~~~~~when i=1
            swap(1,1)
            permutation(str,2,2)
            {
                print(str);
            }
            swap(1,1)
            ~~~~~~~~~~~~~~~~~~~~~when i=2
            swap(1,2)
            permutation(str,2,2)
            {
                print(str);
            }
            swap(1,2)
          }
      }
      swap(0,1)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~when i=2
      swap(0,2)
      permutation(str,1,2)
      {
          for(i=1,i<=2;i++)
          {
            ~~~~~~~~~~~~~~~~~~~~~when i=1
            swap(1,1)
            permutation(str,2,2)
            {
                print(str);
            }
            swap(1,1)
            ~~~~~~~~~~~~~~~~~~~~~when i=2
            swap(1,2)
            permutation(str,2,2)
            {
                print(str);
            }
            swap(1,2)
          }
      }
      swap(0,2)
  }
}

swap table made from the print(str)

0 1 2
A B C - -
A B C 0,0
A B C 1,1 PRINT
A B C 1,1
A C B 1,2 PRINT
A B C 1,2
A B C 0,0
B A C 0,1
B A C 1,1 PRINT
B A C 1,1
B C A 1,2 PRINT
B A C 1,2
A B C 0,1
C B A 0,2
C B A 1,1 PRINT
C B A 1,1
C A B 1,2 PRINT
C B A 1,2
A B C 0,2
                                           ABC
                                        /   |  \
                                      /     |     \
                                    /       |       \
                                  /         |         \
                                /           |           \
                              /             |             \
                          ABC              BAC              CBA
                       /     \            /   \             /  \
                     /         \        /      \          /     \
                  ABC           ACB  BAC        BCA    CBA       CAB

************************************************************/
