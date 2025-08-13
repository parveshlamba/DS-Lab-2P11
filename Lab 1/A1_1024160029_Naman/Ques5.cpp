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
    int sumrows = 0,sumcolumns = 0;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            sumrows += arr[i][j];
        } 
        cout<<"Sum of "<< i + 1 << "  rows is : "<<sumrows<<endl;
        sumrows = 0;
    }
    for(int i = 0;i<m;i++){
        for(int j =0 ;j<n;j++){
            sumcolumns += arr[j][i];
        }
        cout<<"Sum of "<< i + 1 << "  column is : "<<sumcolumns<<endl;
        sumcolumns = 0;
    }
}