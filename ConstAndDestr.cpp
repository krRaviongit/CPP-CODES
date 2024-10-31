//using the concept of constructor and destructor.
#include<iostream>
using namespace std;
class constructor{

    public:
    constructor test(){
        cout<<"Constructor created"<<endl;
    }
        ~constructor(){
            cout<<"Destructor created"<<endl;
        }
};
    int main(){
        constructor c;
        return 0;
    }

