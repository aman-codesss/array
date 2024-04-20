#include<iostream>
using namespace std;
int uni(int *arr,int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
  
    int a[]={1,44,1,3,4,6,4,3,6};
    int ans =uni(a,9);
    cout<<"The unique element in array: "<<ans<<endl;



}