//using the global variable
#include<iostream>
using namespace std;
int a=100;
int main(){
    int a=50;
    {
        int a=10;
        cout<<"Value of a is:"<<a<<endl;
        cout<<::a<<endl; //:: is used to obtain global variable.
    }
    cout<<a<<endl;
    return 0;
}