# Definition for a  binary tree node
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    def maxDepth(self, root):
	    return self.checkNode(root , 1)

    def checkNode(self , node , base_level):
    	if node!=None:
    		left_level = self.checkNode(node.left , base_level+1)
    		right_level = self.checkNode(node.right , base_level+1)
    		max_Num = max_num(left_level , right_level)
    		return max_Num
    	else:
    		return base_level-1

def max_num(a , b):
   		if a>b:
   			return a
   		else:
   			return b

test_tree = TreeNode(0)
test_tree1 = TreeNode(1)
test_tree2 = TreeNode(2)
test_tree3 = TreeNode(3)

test_tree.left = test_tree1
test_tree.right = test_tree2
test_tree2.left = test_tree3

test = Solution()
print test.maxDepth(test_tree)
