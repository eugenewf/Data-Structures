#ifndef PREFIX_TREE_H
#define PREFIX_TREE_H
#include <stdio.h>

/*Stores data according to alphanumeric key (printable characters only).  Addition, access, and deletion times asymtotically linear with respect to length of key.  Memory usage is quite high due to the number of pointers that do not go to useful nodes (see Dierected Acyclic Word Graph (DAWG) for a similar structure that is more memory efficient).*/

/*Basic node for prefix tree structure.*/
struct PrefixTreeNode{
	void *data;
	struct PrefixNode next[95];
};

/*Management structure for individual trees.*/
struct PrefixTree{
	struct PrefixTreeNode *head;
	int size;
	int depth;
};

/*Iterator for traversing the tree*/
struct PrefixTreeIterator(){

};

/*Returns a pointer to an empty prefix tree.*/
struct PrefixTree* PrefixTreeCreate();

/*Returns a pointer to an empty prefix tree node.*/
struct PrefixTreeNode* PrefixTreeNodeCreate();

/*Returns a pointer to a new PrefixTreeIterator*/
struct PrefixTreeIterator* PrefixTreeIteratorCreate();


/*Adds given (key, data) pair to the tree, considers preexisting data with same key a failure.  Returns data pointer on success, NULL on failure.*/
void* PrefixTreeAdd(struct PrefixTree *tree, char *key, void *data); 

/*Adds given (key, data) pair to the tree, overwrites preexisting data with same key.  Returns data pointer on success, NULL on failure.*/
void* PrefixTreeSet(struct PrefixTree *tree, char *key, void *data);

/*Access data associated with the given key.  Returns data pointer on success, NULL on failure.*/
void* PrefixTreeGet(struct PrefixTree *tree, char *key);

/*Removes (key, data) pair associated with given key.  Returns data pointer on success, NULL on failure*/
void* PrefixTreeRemove(struct PrefixTree *tree, char *key);

void main();
#endif
