#include<iostream>
using namespace std;

class A{
public:
   virtual void fun(){};
};

/*class B : public A{
    void fun(){
        cout<<"dsds"<<endl;
    }
};*/
//the code is testing the result1
//the test code is running
int main(){

    A a;
    {
    A b(a);
    }


    


    return 0;
}
