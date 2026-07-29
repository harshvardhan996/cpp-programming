#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the value of n";
cin>>n;
cout<<endl;
int sum;

for(int i; i<=n; i++){
sum=sum+i;
}
cout<<"sum of"<<n<<"number is:"<<sum;

return 0;
}
