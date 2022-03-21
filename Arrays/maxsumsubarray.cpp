#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int> A){
    int cs =0;
    int largest =0;
    for(int i=0;i<A.size();i++){
        cs=cs+A[i];
        if(cs<0){
            cs=0;
        }
        largest=max(largest,cs);
    }
    return largest;
}

int main(){
	//Array Containing 
	
    vector<int> arr={1,-2,3,4,4,-2};
	cout<< maxSumSubarray(arr) <<endl;

	return 0;
}