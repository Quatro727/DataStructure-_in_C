#include "bst.h"

int main(void)
{
    TreeNode *root = NULL;

    root = insert_node(root, 30);
    root = insert_node(root, 20);
    root = insert_node(root, 10);
    root = insert_node(root, 40);
    root = insert_node(root, 50);
    root = insert_node(root, 60);

    printf("Result of inordering the BST\n");
    inorder(root);
    printf("\n\n");

    if (search(root, 30) != NULL)
        printf("Find key 30 while searching the BST!!\n");
    else
        printf("Fail to find key 30 in BST...\n");

    return 0;
}
