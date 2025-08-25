#include<iostream>
#include<vector>
using namespace std;
bool twosum(vector<int>v,int t) {
    int left=0;
    int right=v.size()-1;
    while(left<right){
        int sum=v[left]+v[right];
        if(sum<t)
         left++;
        else if(sum>t)
         right--;
        else
         return true;
    }
    return false;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int t;
 cin>>t;
 cout<<(twosum(v,t)?"true":"false");
}