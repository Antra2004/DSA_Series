/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL) return NULL;
        Node* newHead=new Node(head->val);
        Node* temp=head->next;
        Node* newTemp=newHead;
        unordered_map<Node*,Node*>m;
        m[head]=newHead;
        while(temp!=NULL){
            Node* copyNode=new Node(temp->val);
            m[temp]=copyNode;
            newTemp->next=copyNode;
            temp=temp->next;
            newTemp=newTemp->next;

        }
        temp=head;
        newTemp=newHead;
        while(temp!=NULL){
            newTemp->random=m[temp->random];
            temp=temp->next;
            newTemp=newTemp->next;
        }
        return newHead;
    

    }
};