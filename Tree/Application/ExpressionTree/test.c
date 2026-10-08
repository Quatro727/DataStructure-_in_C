#include "eval.h"

int main(void)
{   
    /* Tree Structure */
    //       +
    //   *       *
    //1    4  16    25
    TreeNode n1 = {1, NULL, NULL};
    TreeNode n2 = {4, NULL, NULL};
    TreeNode n3 = {'*', &n1, &n2};
    TreeNode n4 = {16, NULL, NULL};
    TreeNode n5 = {25, NULL, NULL};
    TreeNode n6 = {'+', &n4, &n5};
    TreeNode n7 = {'+', &n3, &n6};
    
    //root node
    TreeNode *exp = &n7;
    
    //deal with expression constructed as a Tree Structure
    printf("value of expression: %d\n", evaluate(exp));

    return 0;
}
