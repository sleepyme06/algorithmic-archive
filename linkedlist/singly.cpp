#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int x){
        data=x;
        next=nullptr;
    }
};

Node*ll(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int lenght(Node*head){
    Node*temp=head;
    int count=0;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}

bool search(Node*head,int val){
    Node*temp=head;
    while(temp){
        if(temp->data==val)return true;
        temp=temp->next;
    }
    return false;
}
Node*deletion(Node*head,int k){
    if(head==nullptr)return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node*temp=head;
    Node*prev=nullptr;
    while(temp!=nullptr){
        count++;
        if(k==count){
            prev->next=temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node*insertion(Node*head,int k,int pos){
    Node*temp=new Node(k);
    if(head==nullptr&&pos==1){
        head=temp;
    }
    if(pos==1){
        temp->next=head;
        head=temp;
    }
    int count=0;
    Node*tem=head;
    while(tem!=nullptr){
        count++;
        if(count==(pos-1)){
            temp->next=tem->next;
            tem->next=temp;
            break;
        }
        tem=tem->next;
    }
    return head;
}

int main()
{
 vector<int>arr={2,1,3,8};
 Node*head=ll(arr);
 cout<<head->data<<endl;
 print(head);
 cout<<lenght(head)<<endl;
 cout<<search(head,3)<<endl;
 cout<<search(head,9)<<endl;
 //  head=deletion(head,3);
 //  head=deletion(head,1);
 //  head=deletion(head,4);
 //  head=deletion(head,5);
 //  head=insertion(head,10,2);
 //  head=insertion(head,10,1);
 // head=insertion(head,10,5);
 head=insertion(head,10,6);
 print(head);
}