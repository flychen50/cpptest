#include <iostream>
using namespace std;
struct Base{
  int j;
  virtual void f(){
    cout<<"Base f()"<<endl;
  }
};

struct Derived :Base {
  void f(){
    cout<<"Dervived"<<endl;
  }
};


int main(int argc,char** argv){
  std::cout<<"test"<<endl;
  Base b;
  b.f();
  b.~Base();
  new (&b) Derived;
  b.f();
}
