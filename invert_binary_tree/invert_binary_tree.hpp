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
class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        // recursive approach
        if (root != nullptr)
        {
            // swap the subtrees
            std::swap(root->left, root->right);
            this->invertTree(root->left);
            this->invertTree(root->right);
        }
        return root;
    }
};

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
class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        // iterative approach
        // emulate the call-stack
        std::stack<TreeNode *> todo_stack;
        todo_stack.push(root);
        while (!todo_stack.empty())
        {
            auto node = todo_stack.top();
            todo_stack.pop();
            if (node != nullptr)
            {
                // swap the subtrees
                std::swap(node->left, node->right);
                // come back to these subtrees in a moment
                todo_stack.push(node->left);
                todo_stack.push(node->right);
            }
        }
        return root;
    }
};