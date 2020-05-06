/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//O(N) space complexity
vector<int> Solution::preorderTraversal(TreeNode* A) {
 
     vector<int> res;
     stack<TreeNode*> st;
     TreeNode * cur=A;
     if(!A)
     return res;
     st.push(A);
     while(!st.empty())
     { 
          cur=st.top();
          res.push_back(cur->val);
          st.pop();
          
          if(cur->right)
          st.push(cur->right);
          
          if(cur->left)
          st.push(cur->left);  
     }
    
    return res;
}
