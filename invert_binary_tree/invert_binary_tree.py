# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # recursive approach
        if root:
            # swap the subtrees
            root.left, root.right = root.right, root.left
            self.invertTree(root.left)
            self.invertTree(root.right)
        return root

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # iterative approach
        # emulate the call-stack
        todo_stack = [root]
        while todo_stack:
            node = todo_stack.pop()
            if node:
                # swap the subtrees
                node.left, node.right = node.right, node.left
                # come back to these subtrees in a moment
                todo_stack.append(node.left)
                todo_stack.append(node.right)
        return root
