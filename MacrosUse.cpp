//Macros are used to minimize the code line

#include<iostream>
#define pi 3.14
#define square(r) ((r)*(r))
using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius:";
    cin>>r;
    double area= pi*square(r);
    cout<<"The area is:"<<area<<endl;
    return 0;

}
