#include "pro.h"
#include <iomanip>

class BST{
	int size;
	NodePtr rootPtr;
  void clearnode(NodePtr);
public:
  BST();
  ~BST();
  void insertNode_exp(string,string,int,int);
  void insertNode_salary(string,string,int,int);
  void inOrder(NodePtr);
  void treeOrder(NodePtr,int);
  void print(int);
  void deletes_exp(int);
  void deletes_salary(int);
};

BST::BST(){
  size=0;
  rootPtr=NULL;
}

BST::~BST(){
  int i;
  clearnode(rootPtr);
}

void BST::insertNode_exp(string n,string j,int x,int y){
  NodePtr new_node= new NODE(n,j,x,y);
    if(new_node){
     if(!rootPtr) {
           rootPtr=new_node;
  }
  else{
    int inserted=0;
    NodePtr t=rootPtr;
    while(!inserted){
     if(t->get_exp() >=x){
  	  /* get to the left*/
     if(t->moveleft()== NULL){
     t-> set_left(new_node);
     inserted=1;
    }
     else t=t->moveleft();
  }
   else{
	  /* get to the right*/
     if(t->moveright()== NULL){
     t-> set_right(new_node);
     inserted=1;
     }
     else t=t->moveright();
	}	
  }
  size++;	
  }
  }
}
void BST::insertNode_salary(string n,string j,int x,int y){
  NodePtr new_node= new NODE(n,j,x,y);
    if(new_node){
     if(!rootPtr) {
           rootPtr=new_node;
  }
  else{
    int inserted=0;
    NodePtr t=rootPtr;
    while(!inserted){
     if(t->get_salary() >=x){
  	  /* get to the left*/
     if(t->moveleft()== NULL){
     t-> set_left(new_node);
     inserted=1;
    }
     else t=t->moveleft();
  }
   else{
	  /* get to the right*/
     if(t->moveright()== NULL){
     t-> set_right(new_node);
     inserted=1;
     }
     else t=t->moveright();
	}	
  }
  size++;	
  }
  }
}
void BST::inOrder(NodePtr treePtr){ 
   if(treePtr){
   inOrder( treePtr->moveleft() ); 
    cout<<"Name:        "<<treePtr->get_name()<<endl; 
    cout<<"Job:         "<<treePtr->get_job()<<endl;
    cout<<"Experience:  "<<treePtr->get_exp()<<endl;
    cout<<"Salary:      "<<treePtr->get_salary()<<endl;
    cout<<"======================="<<endl;
      inOrder( treePtr->moveright());
   }                      
}
void BST::treeOrder(NodePtr treePtr, int x){
  int count=x;
  if(treePtr){
    count++;
    treeOrder(treePtr->moveright(),count);
    cout<<"Name:         "<<treePtr->get_name()<<endl;  
    cout<<"Job:          "<<treePtr->get_job()<<endl;
    cout<<"Experience:   "<<treePtr->get_exp()<<endl;
    cout<<"Salary:       "<<treePtr->get_salary()<<endl;
    cout<<"======================="<<endl;
    count = x;
    count ++;
    treeOrder(treePtr->moveleft(),count);
  }//end if
}

void BST::clearnode(NodePtr treePtr){
  if(treePtr){
  // if tree is not empty, then traverse
  clearnode( treePtr->moveleft() ); 
  clearnode( treePtr->moveright());   
  delete(treePtr);  //print the value
}
}

void BST::print(int x){
  cout<<"After sorting:"<<endl;
  switch(x){
    case 1: inOrder(rootPtr);cout<<endl; break;
    case 2: treeOrder(rootPtr,0);cout<<endl; break;
    default : cout<<"Invalid Input"<<endl; break;
  }
}