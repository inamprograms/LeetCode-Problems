class Listnode {
    public:
        int key;
        int val;
        Listnode* next;
        Listnode(int k = -1, int v = -1, Listnode* n = nullptr) {
            key = k;
            val = v;
            next = n;
        }
};
class MyHashMap {
public:
    vector<Listnode> myMap;
    MyHashMap() {
        myMap = vector<Listnode>(1000, Listnode());
      
    }
    
    int hash(int key) {
        return key % 1000;
    }


    void put(int key, int value) {
        Listnode* cur = &myMap[hash(key)];
        
        while (cur->next){
            if (cur->next->key == key) {
                cur->next->val = value;
                return;
            }
            cur = cur->next;
        }
        cur->next = new Listnode(key, value);
    }
    
    int get(int key) {
        
        Listnode* cur = &myMap[hash(key)];
        cur = cur->next;
        while (cur) {
            if (cur->key == key) {
                return cur->val;
            }
            cur = cur->next;
        }
        
        return -1;
    }
    
    void remove(int key) {
        Listnode* cur = &myMap[hash(key)];
        while (cur && cur->next) {
            if (cur->next->key == key) {
                cur->next = cur->next->next;
                return;
            }
            cur = cur->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

