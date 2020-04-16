/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* build(vector<int> &A ,int s,int e)
{
      if(s==e)
      return new TreeNode(A[s]);
      if(s>e)
      return NULL;
      
      int mid=(s+e)/2;
      
      TreeNode* root=new TreeNode(A[mid]);
      root->left=build(A,s,mid-1);
      root->right=build(A,mid+1,e);
      
      return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
  
     vector<int> B=A;
     if(A.size()==0)
     return NULL;
     
     return build(B,0,B.size()-1);
    
    
}
