#include <iostream>
#include<string>
using namespace std;

#include <iostream>

int main() {
 string str1,str2;
 int n1,n2,flag=0;   
    cout<<"Enter the string 1: ";
 getline(cin,str1);
    cout<<"Enter the string 2: ";
 getline(cin,str2);
 n1 = str1.size();
 n2 = str2.size();
  if(str1!=str2){
      
      if(str1>str2){
          cout<<str1<<" is greater than "<<str2<<endl;
      }
      else{
          cout<<str2<<" is greateer than "<<str1<<endl;
      }
  }
    else{
        cout<<str1<<" is equal to "<<str2<<endl;
    }
    
    return 0;
    
}