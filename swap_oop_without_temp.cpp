#include<iostream>
using namespace std;

class Swapper{
private:
int a,b;

public:
Swapper(int x, int y){
    a=x;
    b=y;
}

void display(){
    cout<<"a="<<a<<",b="<<b<<endl;
}

void swapValues(){
    a=a+b;
    b=a-b;
    a=a-b;
}
};


int main(){
int x,y;


cout<<"Enter two numbers:";
cin>>x>>y;

Swapper obj(x,y);

cout<<"Before swapping:";
obj.display();

obj.swapValues();

cout<<"After swapping:";
obj.display();

return 0;
}