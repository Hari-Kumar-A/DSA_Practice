class LRUCache {
public:
    struct Node { //leetcode
        int _key;
        int _data;
        Node* next;
        Node* prev;
        Node(int key, int data) // constructor
        {
            _key = key;
            _data = data;
        }
    };
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    int cap;
    unordered_map<int, Node*> mp;
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode) {
        Node* temp = head->next;

        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(Node* delNode) {
        Node* delprev = delNode->prev;
        Node* delnext = delNode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int key) {
        if (mp.find(key) != mp.end()) // if it exists
        {
            Node* address = mp[key];
            int ans = address->_data; // fetch data
            mp.erase(key) ;
            deleteNode(address);
            addNode(address);
            mp[key] = head->next;
            return ans;
        }
        return -1;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) // if it exists
        {
            Node* address = mp[key];
            deleteNode(address);
            mp.erase(key);
        }
        if (mp.size() == cap ) 
        {
            mp.erase(tail->prev->_key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        mp[key]=head->next;
    }

}
;

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */