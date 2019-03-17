#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"

#define NO_OF_ALPHABET_CHARS 26

typedef struct trieNode
{
    struct trieNode *children[NO_OF_ALPHABET_CHARS];
    bool isEndOfWord;
} TRIENODE;

TRIENODE *createTrieNode(void)
{
    TRIENODE *newTrieNode = NULL;
    int i =0;
    newTrieNode = (TRIENODE *) malloc(sizeof(TRIENODE));
    if (newTrieNode)
    {
        newTrieNode -> isEndOfWord = false;
        while (i < NO_OF_ALPHABET_CHARS)
        {
            newTrieNode->children[i] = NULL;
            i++;
        }
    }
    return(newTrieNode);
}
void insertNode(TRIENODE *root, const char *key)
{
    
}

int main(void)
{
    TRIENODE *rootTrieNode = NULL;

    rootTrieNode = (TRIENODE *) malloc(sizeof(TRIENODE));
}