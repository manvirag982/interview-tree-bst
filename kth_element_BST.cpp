
// o(n)  for O(h) see leetcode
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int res;
 int r;
 void inorder(TreeNode* A ,int B)
 {
        if(!A)
        return ;
        
        inorder(A->left,B);
        res++;
        if(res==B)
        r=A->val;
        inorder(A->right,B);
        
 }
int Solution::kthsmallest(TreeNode* A, int B) {

    res=0;
    inorder(A,B);    
    return r;    
}
