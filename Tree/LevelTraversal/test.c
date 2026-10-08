#include "level_order.h"

int main(void)
{
    //create node constucting Tree structure
    TreeNode n1 = {1, NULL, NULL};
    TreeNode n2 = {4, &n1, NULL};
    TreeNode n3 = {16, NULL, NULL};
    TreeNode n4 = {25, NULL, NULL};
    TreeNode n5 = {20, &n3, &n4};
    TreeNode n6 = {15, &n2, &n5};
    
    //Level order
    TreeNode *root = &n6;

    printf("Level Order: ");
    level_order(root);
    printf("\n\n");

    return 0;
}
