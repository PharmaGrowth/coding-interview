#include <iostream>
#include <string>
struct TreeNode
{
    int value;
    TreeNode *left, *right;
};

struct ListNode
{
    int value;
    ListNode *next;
};

TreeNode *newTreeNode(int value, TreeNode *left, TreeNode *right)
{
    TreeNode *node = new TreeNode;
    node->value = value;
    node->left = left;
    node->right = right;
    return (node);
}

ListNode *newListNode(int value, ListNode *next)
{
    ListNode *node = new ListNode;
    node->value = value;
    node->next = next;
    return (node);
}

TreeNode *root = newTreeNode(
        1,
        newTreeNode(
            1,
            newTreeNode(2, NULL, NULL),
            newTreeNode(3, newTreeNode(5, NULL, NULL), NULL)),
        newTreeNode(8, newTreeNode(13, NULL, NULL), NULL));

// Fix the function so that the program output matches the expected output
ListNode *work(TreeNode *root)
{
    ListNode *node = newListNode(root->value, NULL);
    return (node);
}


// Any modifications to the code after this line will result in immediate disqualification.   
void print(ListNode *node) {
    std::cout <<"[";
    ListNode* current = node;
    while(current != NULL) {
        std::cout << current->value;
        if(current->next != NULL) 
            std::cout << ", ";
        current = current->next;
    }
    std::cout <<"]";
}
int main()
{
    ListNode *result = work(root);
    print(result);
    return 0;
}


//Expected Output
//[1, 1, 2, 3, 5, 8, 13]