#include<bits/stdc++.h>
#include <vector>
using namespace std;

int largestElement(vector<int> arr) {
    int largest = 0;
    for(int i=0;i<arr.size();i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
      }
      return largest;
}

int main(){
    vector<int> arr ={-3,4,1,2,3};
    cout << largestElement(arr) <<endl;
}