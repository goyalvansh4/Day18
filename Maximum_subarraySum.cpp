#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=9;
    int arr[9]={1,2,3,5,3,-8,4,7,-11};
    int currsum =0;
    int maxsum=0;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        
        currsum+=arr[i];
        
        
        if(currsum>maxsum){
            maxsum = currsum;
            v.push_back(currsum);
        }
        if(currsum<0){
            currsum=0;
        }
    }
    if(currsum==0){
        cout<<"0"<<endl;
    }
    else{
    cout<<maxsum<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    }
}
