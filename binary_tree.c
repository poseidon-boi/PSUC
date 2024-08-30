// Work in progress to implement a binary tree
#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
 struct TreeNode {
 int val;
 struct TreeNode *left;
 struct TreeNode *right;
 };

// Function to evaluate the binary tree node
int evaluateTree(struct TreeNode* root) {
    if(root -> val == 2)
        return (evaluateTree(root->left) | evaluateTree(root->right));
    else if(root -> val == 3)
        return (evaluateTree(root->left) & evaluateTree(root->right));
    else
        return root -> val;
}

// Function to input a non-leaf node
void inputNode(struct TreeNode* root)
{
    printf("Input root, left, right: ");
    scanf("%d %d %d", root->val, root->left->val, root->right->val);
    if(root->left->val > 1)
        inputNode(root->left);
    if(root->right->val > 1)
        inputNode(root->right);
}

// Main function
int main()
{
    struct TreeNode *root;
    inputNode(root);
    int Eval = evaluateTree(root);
    printf("%s", Eval?"true":"false");
    return 0;
}