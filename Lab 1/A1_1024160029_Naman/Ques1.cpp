#include<iostream>
using namespace std;

void createanddiaplyarray(int arr[],int n , int f){
    if(f == 1){
        for(int i =0;i<n;i++){
            cout<<"Enter the  "<<i+1<< " Element of the array : ";
            cin>>arr[i];
        }
    }

    if (f == 2)
    {
        cout<<"The inputed array is this : "<<endl;
        for(int i =0 ; i<n;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
    
}

void insertelement(int arr[],int n){
    int p ; int newelement;
    cout<<" Enter the place where the element is to be inserted : "<<endl;
    cin>>p;
    if (p>n || p<0){
        cout<<" Size of array exxceded "<<endl;
    }
    else{
        cout<<"Enter the element that has to inserted : ";
        cin>>newelement;
        arr[p-1] = newelement;
    }
}

void deletion(int arr[], int &n) {
    int p;
    cout << "Enter the position to delete : ";
    cin >> p;
    if (p > n || p <= 0) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = p - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void linearsearch(int arr[] , int n){
    int element;
    cout<<"Enter the element to be searched: ";
    cin>>element;
    bool found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            cout<<"Required element found at index "<< i;
            found = true;
            break;
        }
    }
        if(found == false){
            cout<<"Element not found!";
        }
}

int main(){
    int n;
    int f;
    int arr[100];
    bool created = false;
    while (true)
    {
        cout<<"Enter the function to perform : "<<endl;
        cout<<"1. Create an array"<<endl<<"2. Display an array"<<endl<<"3. Insert an element in array "<<endl<<"4. Delete an element in array"<<endl<<"5. Linear Serach an element "<<endl<<"6. Exit the code"<<endl;
        cin>>f;
        if(f == 1){
            cout<<"Enter the number of the elements in the array : ";
            cin>>n;
            createanddiaplyarray(arr,n ,f);
            created = true;
            continue;
        }
        else if (f==2){
            if(created == false){
                cout<<"Create an arrayb first !"<<endl;
            }
            else{
                createanddiaplyarray(arr,n,f);
                continue;
            }
        }
        else if(f == 3){
            if (created==false){
                cout<<"Create an array first !"<<endl;
                continue;
            }
            else{
                insertelement(arr,n);
                continue;
            }
        }
        else if(f == 4){
            if (created==false){
                cout<<"Create an array first !"<<endl;
                continue;
            }
            else{
                deletion(arr,n);
                continue;
            }
        }
        else if(f == 5){
            if (created==false){
                cout<<"Create an array first !"<<endl;
                continue;
            }
            else{
                linearsearch(arr,n);
                continue;
            }
        }
        else if(f == 6){
            cout<<"Exited the code succesfully ";
            break;
        }
        else{
            cout<<"Invaild Input ! ";
            continue;
        }
    }
    return 0;
}