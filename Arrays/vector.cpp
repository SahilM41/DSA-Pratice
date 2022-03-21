#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr ={1,2,10,12,15};
    arr.pop_back();
    arr.push_back(16);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] <<endl;
    }
    cout<<arr.size() <<endl;
    cout <<arr.capacity() <<endl;
}