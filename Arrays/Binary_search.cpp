#include<iostream>
using namespace std;
//Logic About Binary
//{1,2,10,11,19,29,30}
// search 19
// mid = 11 
// we search in {19,29,30} 
//mid = 29
//{19} Output
//s=0 , e = n-1
//while(s<=e){
// find mid
//do compare at mid
// equal ,left ,right
//}
// Time Complexity   O(log N)
// Only works when sorted and monotonic (non-decreasing)
int Binary_search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while (s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            e =mid -1;
        }else{
            s=mid+1;
        }
    }
    
    

}

int main(){
    int arr[]={10,20,30,40,45,60,70,89};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index = Binary_search(arr,n,key);
    if(index != -1){
        cout<<key <<" is present at index "<< index <<endl;
    }else{
        cout<<key <<" is not found!"<<endl;
    }

    return 0;

}