#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i] = arr[n-i-1];
    }
    cout<<"The reversed array is ->  ";
    for(int j=0;j<n;j++){
        cout<<brr[j]<<"  ";
    }
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements in the array -> \n";
    for(int i=0;i<n;i++){
        cout<<"Enter the "<< i+1 <<"  element of the array : ";
        cin>>arr[i];
    }
    reversearray(arr,n);
    return 0;
}