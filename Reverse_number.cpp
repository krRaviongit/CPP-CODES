#include<iostream>
using namespace std;
int num,rev_num=0,rem;
int main(){
cout<<"Enter your number: ";
cin>>num;
while(num!=0){
    rem=num%10;
    rev_num=rev_num*10+rem;
    num/=10;
}
cout<<"Your reversed number is: "<<rev_num<<endl;
return 0;
}
