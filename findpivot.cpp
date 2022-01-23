#include<iostream>
using namespace std;

int findPivot(int arr[],int n){
int s=0,e=n-1;
int mid= s+ (e-s)/2;
while(s<e){
 if(arr[mid]>arr[0]){
   s= mid+1;
   }
   else{
   e = mid;
   }
  mid= s+ (e-s)/2;
  
  }
  return s;
  
  }


int main(){

  int  n=5;
  int arr[5]={7,9,1,2,3};

int pivot = findPivot(arr,n);

cout<<" Pivot is at index-> "<<pivot<<endl;

return 0;

}
