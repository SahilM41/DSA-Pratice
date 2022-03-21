//1,2,3,4
//(1,2) (1,3) (1,4)
//(2,3) (2,4)
//(3,4)
#include<iostream>
using namespace std;
// Time Complexity - 
void printAllPairs(int arr[],int n){
    for(int i=0; i<n; i++){
        int x =arr[i];
        for(int j=i+1; j<n; j++){
            int y =arr[j];
            cout<< x <<"," <<y <<endl;
        }
        cout<< endl;
    }

}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    printAllPairs(arr,n);

    return 0;
}