//S O(n) T O(n)

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ix;
TreeNode* build(map<int,int> &mp,vector<int>&A,vector<int>&B,int s,int e)
{
      if(ix<0 || s>e )
      return NULL;
      
      
      TreeNode* root=new TreeNode(B[ix]);
      
      int mid=mp[B[ix]];
      ix--;
      
      
      root->right=build(mp,A,B,mid+1,e);
      root->left=build(mp,A,B,s,mid-1);
      return root;
      
      
      
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {


       if(A.size()==0 && B.size()==0)
       return NULL;
    
       ix=A.size()-1;  
       map<int,int> mp;
       for(int i=0;i<A.size();i++)
       mp[A[i]]=i;
       
       return build(mp,A,B,0,A.size()-1);
      
        
        
    
}
