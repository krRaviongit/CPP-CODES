/*C++ provides inline functions to reduce the function call overhead. 
An inline function is a function that is expanded in line when it is called.
When the inline function is called whole code of the inline function gets inserted or 
substituted at the point of the inline function call. This substitution is performed by the C++ compiler at compile time.
An inline function may increase efficiency if it is small.*/

#include<iostream>
using namespace std;
inline int sum(int a,int b) //! inline is used to reduce the execution time.
{
    return a+b;
}
int main()
{
    cout<<sum(6,9);
    return 0;
}