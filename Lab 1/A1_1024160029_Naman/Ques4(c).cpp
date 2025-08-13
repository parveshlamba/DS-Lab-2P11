#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the size of the matrix : \n";
    cin>>n>>m;
    cout<<"Enter the matrix \n";
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<"Enter the element at ["<< i << " , "<< j <<"] : ";
            cin>>arr[i][j];
        }
    }
    cout<<"Inputed Matrix -> \n";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    int brr[m][n];
    for(int i=0;i<n;i++){
        for(int j =0 ;j<m;j++){
            brr[j][i] = arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Transpose of the inputed matrix -> \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}