#include<iostream>
using namespace std;

int main(){
  Func();

  return 0;
}

void Func(){  // function starts
  class MyClass{   // class definition
    int i;
  public :
    void put_i(int n){i=n;}
    int get_i(){return i;}
  }Obj;  // class definition ends

  Obj.put_i(10);
}  // function ends
