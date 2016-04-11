# Definition for a  binary tree node
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None

class Solution:
    # @param p, a tree node
    # @param q, a tree node
    # @return a boolean
    def isSameTree(self, p, q):
        
        return self.checkNode(p , q)

    def checkNode(self , p , q):
    	if p==None and q==None:
    		return True
    	elif p==None and q!=None or p!=None and q==None:
    		return False
    	else:
    		if p.val == q.val:
    			if self.checkNode(p.left , q.left)!=False:
    				if self.checkNode(p.right , q.right)!=False:
    					return True
    				else:
    					return False
    			else:
    				return False

    		else:
    			return False

    	


test_tree = TreeNode(0)
test_tree1 = TreeNode(1)
test_tree2 = TreeNode(2)
test_tree3 = TreeNode(3)

test_tree_p = TreeNode(0)
test_tree1_p = TreeNode(1)
test_tree2_p = TreeNode(2)
test_tree3_p = TreeNode(3)

test_tree.left = test_tree1
test_tree.right = test_tree2
test_tree2.left = test_tree3

test_tree_p.left = test_tree1_p
test_tree_p.right = test_tree2_p
test_tree2_p.right = test_tree3_p

test = Solution()
print test.isSameTree(test_tree , test_tree_p)
