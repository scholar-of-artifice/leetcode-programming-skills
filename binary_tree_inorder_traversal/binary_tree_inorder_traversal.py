# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        # iterative approach
        if not root:
            return []
        # make an array like from values of:
        # - traverse left subtree
        # - root
        # - traverse right subtree
        return self.inorderTraversal(root.left) + [root.val] + self.inorderTraversal(root.right)
