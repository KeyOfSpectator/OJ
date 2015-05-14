/*
 * 116_Populating Next Right Pointers in Each Node.cpp
 *
 *  Created on: 2015Äê5ÔÂ14ÈÕ
 *      Author: fsc
 */

#include <stdio.h>
#include <iostream>

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */

struct TreeLinkNode {
  int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
    void connect(TreeLinkNode *root) {

    }
};

int main(){

	TreeLinkNode root = TreeLinkNode(1);
	TreeLinkNode node2 = TreeLinkNode(2);
	TreeLinkNode node3 = TreeLinkNode(3);
	TreeLinkNode node4 = TreeLinkNode(4);
	TreeLinkNode node5 = TreeLinkNode(5);
	TreeLinkNode node6 = TreeLinkNode(6);
	TreeLinkNode node7 = TreeLinkNode(7);

	root.left = &node2;
	root.right = &node3;
	node2.left = &node4;
	node2.right = &node5;
	node3.left = &node6;
	node3.right = &node7;

	Solution solution;
	solution.connect(&root);

	return 0;
}


