#include<iostream>
using namespace std;
int uniqueOcurr(int *arr, int n){
    bool ans =0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int a[]={1,2,2,3,3,3,5,5,5,5};
    int size =10;
    int b = uniqueOcurr(a,size) ;
    cout<<"the unique element is: "<<b<<endl;
}