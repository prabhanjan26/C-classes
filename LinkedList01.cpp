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
    
};
node* convertarr2ll(vector<int>&v){
    node*head = new node(v[0]);
    node*mover = head;
    for(int i=1;i<v.size();i++){
        node*temp = new node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traversell(node*head){
    node*temp = head;
    while(temp){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
int lenghtll(node*head){
    node*temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        temp = temp->next;
        
    }
    return cnt;
}
int check_if_exists(node*head,int k){
     node*temp = head;
    while(temp){
        if(temp->value == k){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main() {
	// your code goes here
// 	node*head = new node(1);
    vector<int>v = {15,2,3,4};
    node*head = convertarr2ll(v);
    traversell(head);
    cout<<endl;
    cout<<lenghtll(head);
    cout<<endl;
    cout<<check_if_exists(head,4);
    
	
	

}
