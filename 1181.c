#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 51

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
    temp->wordLen = strlen(item);
    temp->left = temp->right = NULL;
    return temp;
}
TreeNode* insertNode(TreeNode* node, char* item, int itemLen)
{
    if(node == NULL)
    {
        node = newNode(item);
        return node;
    }
    if(node->wordLen > itemLen)
        node->left = insertNode(node->left, item, itemLen);
    else if(node->wordLen < itemLen)
        node->right = insertNode(node->right, item, itemLen);
    else
    {
        switch(strcmp(node->word, item))
        {
            case 0:
                return node;
                break;
            case 1: //item is small
                node->left = insertNode(node->left, item, itemLen);
                break;
            case -1: //item is big
                node->right = insertNode(node->right, item, itemLen);
                break;
        }
    }
    return node;
}
void printList(TreeNode* node)
{
    if (node == NULL) return;
    printList(node->left);
    printf("%s\n", node->word);
    printList(node->right);
}
int main()
{
    int N;
    TreeNode* wordList = NULL;
    char tempWord[MAX_STR_LEN];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", tempWord);
        wordList = insertNode(wordList, tempWord, strlen(tempWord));
    }
    printList(wordList);
    return 0;
}