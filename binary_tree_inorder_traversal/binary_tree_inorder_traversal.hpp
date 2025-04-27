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
    vector<int> inorderTraversal(TreeNode *root)
    {
        // recursive approach
        // make an array like from values of:
        std::vector<int> out_vector = {};
        if (root == nullptr)
        {
            return out_vector;
        }
        // - traverse left subtree
        auto l = this->inorderTraversal(root->left);
        out_vector.insert(out_vector.end(), std::make_move_iterator(l.begin()), std::make_move_iterator(l.end()));
        // - root
        out_vector.push_back(root->val);
        // - traverse right subtree
        auto r = this->inorderTraversal(root->right);
        out_vector.insert(out_vector.end(), std::make_move_iterator(r.begin()), std::make_move_iterator(r.end()));
        return out_vector;
    }
};