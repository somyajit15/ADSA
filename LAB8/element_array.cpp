#include <iostream>
using namespace std;


int main() {
 int n1;
 cout<<"Enter array size: ";
 cin>>n1;
 int arr[n1];
    cout<<"Enter "<<n1<<" elements in array: ";
    for(int i=0;i<n1;i++){
        cin>>arr[i];
       
    }
 int elmt,count=0;
 cout<<"Search element: ";
 cin>>elmt;   
    for(int i = 0;i<n1;i++){
        count++;
        if(elmt==arr[i]){
            break;
        }
  
    }
  cout<<"Element "<<elmt<<"found at index: "<<count-1<<endl;
    
    
return 0;
}