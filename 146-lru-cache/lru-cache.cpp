class LRUCache {
public:
    class Node{
        public:
        int key,val;
        Node* next;Node* prev;
        Node(int k,int v){
            key=k;
            val=v;
            prev=next=NULL;
        }

    };
    Node* head=new Node(-1,-1);
    Node* tail= new Node(-1,-1);
    unordered_map<int,Node*> m;
    int limit;

    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;

        
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
        int ans=m[key]->val;
       Node* ansNode=m[key];
        m.erase(key);
        delNode(ansNode);
        addNode(ansNode);
        m[key]=ansNode;
        return ans;



        
    }
    void addNode(Node* newNode){
        Node* newNext=head->next;
        head->next=newNode;
        newNode->next=newNext;
        newNode->prev=head;
        newNext->prev=newNode;


    }
    void delNode(Node* temp){
        
        Node* prev=temp->prev;
        Node* next=temp->next;
        prev->next=next;
        next->prev=prev;
        temp->next=NULL;
        temp->prev=NULL;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
           Node* oldNode=m[key];
           delNode(oldNode);
           m.erase(key);
        }
        if(m.size()==limit){
           Node* lru = tail->prev;  // save the least recently used node
m.erase(lru->key);       // remove from map
delNode(lru);            // unlink from list
delete lru;              // free memory (optional in CP)

        }
        Node* newNode=new Node(key,value);
        addNode(newNode);
        m[key]=newNode;

        
    }
};