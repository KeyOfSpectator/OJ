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

//class Solution {
//public:
//    void connect(TreeLinkNode *root) {
//    	if(root==NULL){
//    		return;
//    	}
//    	int node_num = 0;
//    	TreeLinkNode* lonelyChild;
//    	recursive(root , node_num , lonelyChild);
//    }
//    void recursive(TreeLinkNode* root , int &node_num , TreeLinkNode* lonelyChild){
//    	node_num++;
//    	if((node_num%2==1) ){
//    		if(issquare(node_num+1))
//    			lonelyChild = NULL;
//    		else
//    			lonelyChild = root;
//    	}
//    	if(node_num%2==0 && lonelyChild!=NULL){
//    		lonelyChild->next = root;
//    	}
//    	if(root->left != NULL && root->right !=NULL){
//    		root->left->next = root->right;
//    	}
//    	if(root->left!=NULL){
//    		recursive(root->left , node_num , lonelyChild);
//    	}
//    	if(root->right!=NULL){
//    		recursive(root->right , node_num , lonelyChild);
//    	}
//    }
//    bool issquare(int num){
//    	int remainder = num%2;
//    	while(remainder==0&&num!=1){
//    		num/=2;
//    		remainder = num%2;
//    	}
//    	if(num==1)
//    		return true;
//    	else
//    		return false;
//    }
//};

class Solution {
public:
    void connect(TreeLinkNode *root) {
    	if(root==NULL)
    		return;
    	recursive(root);
    	return;
    }

    void recursive(TreeLinkNode* firstNode){
    	TreeLinkNode* lonelyNode = NULL;
    	TreeLinkNode* nextFirstNode = firstNode->left;
    	while(firstNode!=NULL){
    		if(lonelyNode!=NULL && firstNode->left!=NULL){
    			lonelyNode->next = firstNode->left;
    		}
    		if(firstNode->left!=NULL){
    			firstNode->left->next = firstNode->right;
    			lonelyNode = firstNode->right;
    		}
    		firstNode = firstNode->next;
    	}
    	if(nextFirstNode!=NULL){
    		recursive(nextFirstNode);
    	}
    	else
    		return;
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


