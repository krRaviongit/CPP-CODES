#include<iostream>
using namespace std;
class area{
    public:
    float r,a;
    void input();
    void output();
};
void area::input(){
    cout<<"Enter radius:"<<endl;
    cin>>r;
}
void area::output(){
    a=3.14*r*r;
    cout<<"Area of Circle is:"<<a<<endl; 
}
int main(){
    area s;
    s.input();
    s.output();
    return 0;
}