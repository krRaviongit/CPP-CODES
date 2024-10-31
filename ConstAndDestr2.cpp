#include<iostream>
using namespace std;
class constructor{
    public:
    constructor()
    {
        int a=10;
        cout<<a<<endl;
    }
    ~constructor(){
        cout<<"Destructor created"<<endl;
    }
};
int main(){
    constructor s1;
    return 0;
}