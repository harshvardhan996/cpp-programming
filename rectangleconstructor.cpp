#include<iostream>
using namespace std;
class rectangle{
public:
float l;
float b;
public:
rectangle () {
l=10;
b=20;
}
rectangle(float a,float c){
l=a;
b=c;
}
rectangle(const rectangle &r){
l=r.l;
b=r.b;
}
void display(){
cout<<"length"<<l<<endl;
cout<<"breath"<<b<<endl;
cout<<"area:"<<l*b<<endl;
}
};
int main(){
rectangle r;
r.display();
rectangle r1(10,10);
r1.display();
rectangle r2(r);
r2.display();
return 0;
}
