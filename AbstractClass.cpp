#include<iostream>
using namespace std;
class base
{
    private:
    int x;
    public:
    virtual void fun()=0;
    int getx(){
        return x;
    } 
};
class derived:public base
{
    public:
    void fun(){
        cout<<"Print fun()";
    }
};
int main()
{
    derived d;
    d.fun();
    return 0;
}