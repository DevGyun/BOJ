#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 50

typedef struct TreeNode
{
    char word[MAX_STR_LEN];
    int wordLen;
    struct TreeNode* left, * right;
} TreeNode;
TreeNode* newNode(char* item)
{
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    strcpy(temp->word, item);
    temp->left = temp->right = NULL;
    return temp;
}
void insertNode(TreeNode* node, char* item)
{
    if (node == NULL)
    {
        node = newNode(item);
        return;
    }
    if (strcmp(item, node->word) == 0)
        return;
    else if (strcmp(item, node->word) < 0)
        insertNode(node->left, item);
    else if (strcmp(item, node->word) > 0)
        insertNode(node->right, item);
}
void printList(TreeNode* node)
{
    if (node == NULL) return;
    printList(node->left);
    printf("%s", node->word);
    printList(node->right);
}
int main()
{
    int N;
    TreeNode* wordList = (TreeNode*)malloc(sizeof(TreeNode));
    char tempWord[MAX_STR_LEN];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf(" %s", tempWord);
        insertNode(wordList, tempWord);
    }
    printList(wordList);
}