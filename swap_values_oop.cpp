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
   int temp=a;
    a=temp;
    a=b;
    b=temp;
}

};
int main(){
Swapper obj(300,290);

cout<<"Before swapping:";
obj.display();

obj.swapValues();

cout<<"After swapping:";
obj.display();


return 0;
}