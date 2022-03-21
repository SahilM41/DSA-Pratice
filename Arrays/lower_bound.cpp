#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int sz = A.size();
    int l =0;
    int r= sz-1;
    int answer=-1;
    while(l<=r){
        int mid=(1+r)/2;
        if(A[mid]>Val){
            r=mid-1;
        }else{
            answer =A[mid];
            l=mid+1;
        }
    }

    return answer;
    
}

int main(){
    vector<int> A={1,2,3,4,6};
    int Val =4;

    cout<< lowerBound(A,Val) <<endl;
    return 0;
}