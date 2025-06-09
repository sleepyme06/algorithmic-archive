#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int x){
        data=x;
        next=nullptr;
        prev=nullptr;
    }
};

Node*ll(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        temp->prev=prev;
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
Node*deletion(Node*head,int k){
    if (head==nullptr)return head;
    Node*temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        if(count==k)break;
        temp=temp->next;
    }
    if(temp->prev==nullptr && temp->next==nullptr){
        delete temp;
        return nullptr;
    }
    else if(temp->prev==nullptr){
        head=temp->next;
        head->prev=nullptr;
        delete temp;
        return head;
    }
    else if(temp->next==nullptr){
        temp->prev->next=nullptr;
        delete temp;
        return head;
    }
    else{
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        return head;    
    } 
}
int main(){
 vector<int>arr={1,3,2,4};
 Node*head=ll(arr);
 cout<<head->data<<endl;
 print(head);
 deletion(head,2);
 print(head);
}