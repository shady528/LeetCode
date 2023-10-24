/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     vector<int> largestValues(TreeNode* root) 
//     {
//         if(!root) return {};

//         queue<TreeNode*> q;
//         q.push(root);

//         vector<int> res;

//         while(!q.empty())
//         {
//             int n = q.size();
//             int maxEl = INT_MIN;
//             while(n--)
//             {
//                 TreeNode* node = q.front();
//                 q.pop();

//                 maxEl = max(maxEl,node->val);

//                 if(node->left) q.push(node->left);

//                 if(node->right) q.push(node->right);
//             }
//             res.push_back(maxEl);
//         }
//         return res;
//     }
// };
class Solution {
public:
    vector<int> res;

    vector<int> largestValues(TreeNode* root) 
    {
        DFS(root,0);
        return res;
    }

    void DFS(TreeNode* root, int depth)
    {
        if(!root) return;

        if(depth == res.size())
            res.push_back(root->val);

        else
            res[depth] = max(res[depth], root->val);

        DFS(root->left, depth+1);
        DFS(root->right, depth+1);
    }
};