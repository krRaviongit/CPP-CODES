#include<iostream>
using namespace std;
class add{
    public:
    int a,b,c;
    void input(){
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
    }
    void output(){
        c=a+b;
        cout<<"Sum is:"<<c<<endl;
    }
};
int main(){
    add s;
    s.input();
    s.output();
    return 0;
}
