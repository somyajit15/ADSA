#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main() {
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"Fibonaci of "<<num<< " is: "<<fibo(num);
  
    
  
          
return 0;
}