#include "eval.h"

int evaluate(TreeNode *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    else {
        int op1 = evaluate(root->left);
        int op2 = evaluate(root->right);

        printf("Caculating %d %c %d\n", op1, root->data, op2);

        switch (root->data) {
            case '+':
                return op1 + op2;
            case '-':
                return op1 - op2;
            case '*':
                return op1 * op2;
            case '/':
                return op1 / op2;
        }
    }
    return 0;
}

