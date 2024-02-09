#include<iostream>
using namespace std;
int main(){
int x = 001011;
int cnt=0;
while(x>0){
    if(x&1>0)cnt++;
    x=x>>1;
}
cout<<cnt;
return 0;
}
