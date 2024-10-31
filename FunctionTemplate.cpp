#include<iostream>
using namespace std;
template<class T>
void Show(T a,T b) //2 Parameter function template.
{
    cout<<a+b<<endl;
}
int main(){
    Show(10,20);
    Show(20.5,80.5);
    return 0;
}
