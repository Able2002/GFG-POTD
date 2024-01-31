class Solution
{
    public:
        //Function to insert string into TRIE.
        void insertWord(struct TrieNode *root, string key){
    if(key.size() == 0){
        root->isLeaf = true;
        return;
    }
    
    int index = key[0] - 'a';
    struct TrieNode * child;
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{
        child = getNode();
        root->children[index] = child;
    }
    
    insertWord(child, key.substr(1));
}

void insert(struct TrieNode *root, string key)
{
    insertWord(root, key);
}

//Function to use TRIE data structure and search the given string.
bool searchKey(struct TrieNode *root, string key){
    if(key.size()==0){
        return root->isLeaf;
    }
    
    int index = key[0] - 'a';
    struct TrieNode * child;
    
    if(root->children[index] !=NULL){
        child = root->children[index];
    }
    else{
        return false;
    }
    
    return searchKey(child, key.substr(1));
}
bool search(struct TrieNode *root, string key) 
{
    return searchKey(root, key);
}
};

