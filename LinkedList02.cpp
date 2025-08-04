#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node*next;
    
    node(int val){
        value = val;
        next = nullptr;
    }
    node(int val,node*next1){
        value = val;
        next = next1;
    }
    
};
node*vectorTolist(vector<int>&v){
    node*head = new node(v[0]);
    node*mover = head;
    for(int i=1;i<v.size();i++){
        node*temp = new node(v[i]);
        mover-> next = temp;
        mover = temp;
    }
    return head;
}
void traverseList(node*head){
    node*temp = head;
    while(temp){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

node*deleteHead(node*head){
    if(head==NULL) return head;
    node*temp = head;
    head = head-> next;
    delete temp;
    return head;
}
node*deleteTail(node*head){
    if(head == NULL or head->next == NULL) return NULL;
    node*temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
node*deleteKth(node*head,int k){
    if(head == NULL) return NULL;
    if(k==1){
        node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    node*temp = head;
    node*prev = NULL;
    while(temp){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        
    }
    return head;
}
node*insertHead(node*head,int val){
    node*temp = new node(val,head);
    return temp;
    
}
node*insertTail(node*head,int val){
    if(head == NULL){
        return new node(val);
    }
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node*newNode = new node(val);
    temp->next = newNode;
    return head;
}
node*insertKth(node*head,int val,int k){
    if(head == NULL){
        if(k == 1){
            return new node(val);
        }
    }
    if(k == 1){
        node*newNode = new node(val,head);
        return head;
    }
    int count = 0;
    node*temp = head;
    while(temp){
        count++;
        if(count == k-1){
            node*newNode = new node(val,temp->next);
            temp-> next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}



int main() {
	// your code goes here
	vector<int>v = {2,4,6,8,10};
	
	node*head = vectorTolist(v);
	

    // head = deleteHead(head);
    // head = deleteTail(head);
    // head = deleteKth(head,0);
    // head = insertHead(head,17);
    // head = insertTail(head,27);
    head = insertKth(head,66,4);
    
    traverseList(head);
    
	

}
