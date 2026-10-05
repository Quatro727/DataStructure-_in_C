#include "traversal.h"

int main(void)
{
    TreeNode n1 = {1, NULL, NULL};
    TreeNode n2 = {4, &n1, NULL};
    TreeNode n3 = {16, NULL, NULL};
    TreeNode n4 = {25, NULL, NULL};
    TreeNode n5 = {20, &n3, &n4};
    TreeNode n6 = {15, &n2, &n5};

    TreeNode *root = &n6;

   //preorder
   printf("Preorder: ");
   preorder(root);
   printf("\n\n");

   //inorder
   printf("Inorder: ");
   inorder(root);
   printf("\n\n");

   //postorder
   printf("Postorder: ");
   postorder(root);
   printf("\n\n");

   return 0;
}
