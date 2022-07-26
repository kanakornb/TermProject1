#ifndef stack_h
#define  stack_h
#include "pro.h"

class Stack{
private:
	 NodePtr top;
	int size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    int pop_exp();
    int pop_salary();
    void push(string,int,int);
};

Stack::Stack(NodePtr t){
  if(t) {
    top=t;
    size=1;
  }
 else{
   top=NULL;
	 size=0;
   }
}
void Stack::push(string a,int x,int y){
  NodePtr new_node=new NODE(a,x,y);
  if(new_node){
	 	  new_node->set_next(top);
      top = new_node;
      size++;
   }
 

}
int Stack::pop_exp(){
 	   NodePtr t=top;
		int value;		
	 if(t)	{
    top=top->get_next();
     value=t->get_exp();
     delete t;
     size--;
     return value;

     }

		cout<<"Empty stack"<<endl;
   return 0;
	}
int Stack::pop_salary(){
 	   NodePtr t=top;
		int value;		
	 if(t)	{
    top=top->get_next();
     value=t->get_salary();
     delete t;
     size--;
     return value;

     }
  cout<<"Empty stack"<<endl;
   return 0;
}

Stack::~Stack(){
   
  	int i;
  NodePtr t=top;
    for(i=0;i<size;i++){
      t=top;
      top=top->get_next();
      delete t;


}


}

#endif