#include <iostream>
using namespace std;
#include "string.h"
#include <ctype.h>
#include "BST.h"
int main (int argc, char **argv)

{
  //Stack s;
  BST b;
  int a=0,x,y,e,s,c=0;
  char z;
  string n,j;
  cout<<"Do you want to sort in the Ascending or Descending order? type 1 for ascending and 2 for decending"<<endl;
  cin>>y;
  while(c!=1){
    cout<<"What do you want to sort?"<<endl;
    cout<<"1.Experience"<<endl<<"2.Salary"<<endl;
    cin>>x; 
  switch(x){
    case 1: for(int i = 1; i<argc;i+=4){
 b.insertNode_exp(argv[i],argv[i+1],atoi(argv[i+2]),atoi(argv[i+3]));
    } c=1; break;
    case 2: for(int i = 1; i<argc;i+=4){
    b.insertNode_salary(argv[i],argv[i+1],atoi(argv[i+2]),atoi(argv[i+3]));
    } c=1; break;
    default: cout<<"Please enter valid choice"<<endl; c=0; break;
  }
  }
  b.print(y);
  while(a!=1){
    cout<<"Do you want to add more data?"<<endl;
    cout<<"y or n"<<endl;
    cin>>z;
    switch(z){
      case 'y':cout<<"Name: ";
               cin>>n;
               cout<<"Job: ";
               cin>>j;
               cout<<"Experience: ";
               cin>>e;
               cout<<"Salary: ";
               cin>>s;
               if(x==1) b.insertNode_exp(n,j,e,s);
               else if(x==2) b.insertNode_salary(n,j,e,s);
               break;
      case 'n':a=1; break;
      default: cout<<"Please enter valid choice"<<endl; a=0; break;
    }
  }
  b.print(y);
  cout<<"Thank you for using our program"<<endl;
}
