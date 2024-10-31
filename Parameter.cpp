#include<iostream>
using namespace std;
class add{
    public: 
    add(int a,int b) //parameter
    {
        int c=a+b;
        cout<<"The sum is created"<<endl;
    }
};
int main(){
    add s(10,20);
    return 0;
}
