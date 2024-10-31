/*Hybrid inheritance is a complex form of inheritance in object-oriented programming (OOP).
In Hybrid Inheritance, multiple types of inheritance are combined within a single class hierarchy,
enabling a varied and flexible structure of classes. In hybrid inheritance, within the same class,
we can have elements of single inheritance, multiple inheritance, multilevel inheritance, 
and hierarchical inheritance.*/

#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"A"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"B"<<endl;
    }
};
class C:public B{
    public:
    C(){
        cout<<"C"<<endl;
    }
};
class D:public B{
    public:
    D(){
        cout<<"D"<<endl;
    }
};
int main(){
    D d;
    C c;
    return 0;
}