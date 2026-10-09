#include "bst.h"

TreeNode *search(TreeNode *node, int key)
{
    if (node == NULL)
        return NULL;

    if (key == node->key)
        return node;
    else if (key < node->key)
        return search(node->left, key);
    else
        return search(node->right, key);
}

TreeNode *new_node(int item)
{
    TreeNode *temp = malloc(sizeof(TreeNode));

    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

TreeNode *insert_node(TreeNode *node, int key)
{
    //if Tree is empty, return a new node
    if (node == NULL)
        return new_node(key);

    //fall down the Tree recursively
    if (key < node->key)
        node->left = insert_node(node->left, key);
    else if (key >  node->key)
        node->right = insert_node(node->right, key);

    //return the root pointer 
    return node;
}

TreeNode *min_value_node(TreeNode *node)
{
    TreeNode *current = node;

    while (current->left != NULL) 
        current = current->left;

    return current;
}

TreeNode *delete_node(TreeNode *root, int key)
{
    if (root == NULL) 
        return root;

    //if key < root->key, key is in T_left
    if (key < root->key)
        root->left = delete_node(root->left, key);
    //if key > root->key, key is in T_right
    else if (key > root->key)
        root->right = delete_node(root->right, key);
    //if key = root->key, must consider 3 cases
    else {
        //if node is leaf node or node has one subtree
        if (root->left == NULL) {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        //if node has 2 subtree
        TreeNode *temp = min_value_node(root->right);

        //while inordering, copy the successor node
        root->key = temp->key;
        //while inordering, delete the successor node
        root->right = delete_node(root->right, temp->key);
    }
    return root;
}

void inorder(TreeNode *root)
{
    if (root) {
        inorder(root->left);
        printf(" [%d] ", root->key);
        inorder(root->right);
    }
}
