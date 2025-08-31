#include<iostream>
using namespace std;
void print(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
void print2(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    print2(n-1);
}
int main()
{
 int n;
 cin>>n;
 print(n);
 cout<<endl;
 print2(n);
}