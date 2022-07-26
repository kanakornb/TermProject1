#ifndef pro_h
#define pro_h

class NODE{
private:
	string name,job;
	int exp,salary;
  NODE *rightPtr;
  NODE *leftPtr;
public:
    NODE(string ="james",string ="Jobless", int =10, int =5100);
    ~NODE();
    int get_exp();
    int get_salary();
    string get_name();
    string get_job();
    //void set_next(NODE *);
    void set_exp(int );
    //NODE *get_next();
    NODE* moveleft(){return leftPtr;}
    NODE* moveright(){return rightPtr;}
    void set_left( NODE* t){ leftPtr=t;}
    void set_right( NODE* t){ rightPtr=t;}
};
typedef NODE *NodePtr;

NODE::NODE(string n, string j, int e, int s){
  name=n;
  exp=e;
  salary=s;
  job=j;
  rightPtr = NULL;
  leftPtr = NULL;
if (exp==1){
  cout<<"Name: "<<name<<"   ---   Job: "<<job<<"   ---   experience: "<<exp<<"year"<<"   ---   Salary: "<<salary<<endl;
}
  if (exp>1)
    {
  cout<<"Name: "<<name<<"   ---   Job: "<<job<<"   ---   experience: "<<exp<<"year"<<"   ---   Salary: "<<salary<<endl; 
    }
    
  }

int NODE::get_exp(){
  return exp;
}
void NODE::set_exp(int e){
  exp=e;
}

int NODE::get_salary(){
  return salary;
}
string NODE::get_name(){
  return name;
}
string NODE::get_job(){
  return job;
}

NODE::~NODE(){
   cout<<"deleting " <<name<<" "<<job<<" "<<exp<<" "<< salary<<endl;
}
//void NODE::set_next(NODE *t) { nextPtr = t; }
//NODE *NODE::get_next() { return nextPtr; }

#endif