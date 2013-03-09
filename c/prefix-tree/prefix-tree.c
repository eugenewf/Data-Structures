struct PrefixTree* PrefixTreeCreate(){
	struct PrefixTree *output = (struct PrefixTree*) calloc (1, sizeof(struct PrefixTree));
	return output;
}

struct PrefixTreeNode* PrefixTreeNodeCreate(){
	struct PrefixTreeNode *output = (struct PrefixTreeNode*) calloc (1, sizeof(struct PrefixTreeNode));
	return output;
}


