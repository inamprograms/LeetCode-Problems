class TrieNode {
    public:
        unordered_map<char, TrieNode*> childern;
        bool endOfWord;
        TrieNode(){
            childern = {};
            endOfWord = false;
        }
};



class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = root;
        
        for (auto c: word) {
            if (cur->childern.find(c) == cur->childern.end()) {
                cur->childern[c] = new TrieNode();
            }
            cur = cur->childern[c];
        }
        cur->endOfWord = true;
    }
    
    bool search(string word) {
        TrieNode* cur  = root;
        
        for (auto c: word) {
            if (cur->childern.find(c) == cur->childern.end()) {
                return false;
            }
            cur = cur->childern[c];
        }
        
        return cur->endOfWord;   
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = root;
        
        for (auto c: prefix) {
            if (cur->childern.find(c) == cur->childern.end()) {
                return false;
            }
            cur = cur->childern[c];
            
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */