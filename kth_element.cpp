#include <iostream>
using namespace std;

void swapVal(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}

int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;

    for(int j=l;j<r;j++){
        if(arr[j]<=pivot){
            i++;
            swapVal(arr[i],arr[j]);
        }
    }

    swapVal(arr[i+1],arr[r]);
    return i+1;
}

int quickSelect(int arr[],int l,int r,int k){

    if(l<=r){

        int p=partition(arr,l,r);

        if(p==k-1)
            return arr[p];

        else if(p>k-1)
            return quickSelect(arr,l,p-1,k);

        else
            return quickSelect(arr,p+1,r,k);
    }

    return -1;
}

int main(){

    int T;
    cin>>T;

    while(T--){

        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        int k;
        cin>>k;

        if(k>n)
            cout<<"not present"<<endl;
        else
            cout<<quickSelect(arr,0,n-1,k)<<endl;
    }
}