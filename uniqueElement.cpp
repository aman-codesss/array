#include<iostream>
using namespace std;
int uni(int *arr,int n){
int freq[100]={0};
for(int i=0;i<n;i++){
    freq[arr[i]]++;
}
    int uniqueCount = 0;
    for(int i=0;i<100;i++){
    bool isUnique =  true;
        for(int j=0;j<100;j++){
            if(i!=j && freq[i]==freq[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            uniqueCount++;
        }
    }
    return uniqueCount;
}
int main(){
  
    int a[]={1,1,3,4,4,4,6,4,6,6,2,2};
    int size = sizeof(a)/sizeof(int);
    int ans =uni(a,size);
    cout<<"The unique element in array: "<<ans<<endl;



}