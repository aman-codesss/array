#include<iostream>
using namespace std;
void pairSum(int* arr,int n,int s){
  
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    for(int k=i+2;k<n;k++){

    
if(arr[i]+arr[j]+arr[k]==s){
    cout<< arr[i] <<" "<< arr[j]<<" "<<arr[k]<<endl;
}
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
    cout<<"Enter number you want to find triplet sum of: "<<endl;
    cin>>s;
    pairSum(a,n,s);

}