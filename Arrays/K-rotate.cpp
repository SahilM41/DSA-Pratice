#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    vector<int> v;
    int n = a.size();
    k = k % n;
 
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           v.push_back(a[n + i - k]);
       }
       else
       {
           v.push_back(a[i - k]);
       }
    }
    return v;
}

int main(){
    vector<int> a ={1,3,5,7,9};
    int k = 2;
    a = kRotate(a,k);
    for(int i=0;i<a.size();i++){
        cout << a[i] << endl;
    }
}