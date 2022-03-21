#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> BubbleSort(vector<int> a){
   int n = a.size();
   bool swapped;
   for(int i=0;i<n-1;i++){
       swapped=false;
       for(int j=0;j<n-i-1;j++){
           if(a[j] < a[j+1]){
               swap(a[j],a[j+1]);
               swapped=true;
           }
       }
       if(swapped==false){
           break;
       }
   }
    return a;
}

int main(){
    vector<int> arr ={1,3,5,7,9};
    arr = BubbleSort(arr);
    for(auto x : arr){
        cout<< x <<",";
    }
    return 0;
}


