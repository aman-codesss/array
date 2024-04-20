#include<iostream>
using namespace std;
void pairSum(int* arr,int n,int s){
  
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==s){
    cout<< arr[i] <<" "<< arr[j]<<endl;
}
}
}
}
int main(){
    int a[100],n,s;
    cout<<"Array length? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number you want to find pair sum of: "<<endl;
    cin>>s;
    pairSum(a,n,s);

}