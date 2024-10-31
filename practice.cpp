/*#include<iostream>
int main()
{
    std::cout<<"Hello World"; //We can write "std::" instead of "using namespace std"
    return 0;
}*/
/*#include<iostream>
int main()
{
    std::cout<<"Hey Ravi";
    return 0;
}*/   

/*#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"Welcome Ravi in C++ Programming"<<std::endl; // we have to separately use std:: with cout and endl to define them in int main() scope.
    std::cout<<"Enter a:";
    std::cin>>a;
    std::cout<<"Enter b:";
    std::cin>>b;
    c=a*b;
    std::cout<<"The value of C is:"<<c;
    return 0;
}*/

/*#include<iostream>
using namespace std; // we have defined "using namespace std" once so dont need to use "std::" separately
int main()
{
    int a,b,prod;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    prod=a*b;
    cout<<"The product of a and b is:"<<prod;
    return 0;
}*/

/*#include<iostream> //library to define standard input and output stream.
#include<cmath> //library to define pow fiunction.
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    c=pow(a,b); //pow function is used to take power b raised to base a.
    cout<<"the required value is:"<<c;
    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age=20;
    string name="Ravi"; //string is a sequence of character.
    char gender='M';
    bool isStudent=true;
    float weight=82.5;
    cout<<name<<"\n"<<age<<"\n"<<gender<<"\n"<<isStudent<<"\n"<<weight;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    cout<<sizeof(int)<<endl; //sizeof()operator  returns the number of bytes required for data type.
    cout<<sizeof(char)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    double d;
    char M;
    string Ravi;
    
    cout<<sizeof(x)<<"\n";
    cout<<sizeof(d)<<"\n";
    cout<<sizeof(10L)<<"\n";  //Long
    cout<<sizeof(10LL)<<"\n"; //long long
    cout<<sizeof(10.5)<<"\n";  //default decimal value will take double as data type
    cout<<sizeof(10.5F)<<"\n"; //add F as suffix to make the data type of decimal value as float.
    cout<<sizeof(M)<<"\n";
    cout<<sizeof(Ravi)<<"\n";
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int x=10; //local variable defined inside a scope.
    cout<<x;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int x=10; //global variable defined outside a scope.
int main()
{
    cout<<x;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int x; //if we dont initialize a local variable with a value and try to access it , will give garbage value.
    cout<<x;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int x; //in case of global variable , if we dont initialise , they return default value as zero bits.
int main()
{
    cout<<x;
    return 0;
}*/

/*#include<iostream>
using namespace std;
extern int x; //on removing this we will get compilation error.
int main()
{
    cout<<x;
    return 0;
}
int x=10;*/ //global variable define below the int main()function. hence we use extern keyword to access it.

/*#include<iostream>
using namespace std;
int x=6;
int main()
{
    int x=9;
    cout<<x; //when local and global variable are with same name then loc;a variable are given preference.
    return 0;
}*/

/*#include<iostream>
using namespace std;
int x=20;
int main()
{
    int x=10;
    {
        int x=30; //innermost scope > outer scope > global scope
        cout<<x;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int x=20;
int main()
{
    {
        int x=10; //cant have two variables with same name in a scope.
        int x=20;
        cout<<x;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    static int x; //static variable gets the default value 0.
    cout<<x;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    const int y=10; //use of constant keyword
    cout<<y;
    return 0;
}*/

/*#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto x=4;
    auto y=3.37;
    auto ptr=&x;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(ptr).name()<<endl;
    return 0;
}*/

/*#include<iostream>
#include<typeinfo>
#include<string>
using namespace std;
int main()
{
    auto x=69;
    auto y=5.5550f;
    auto z='R';
    auto a=-34;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
    cout<<typeid(a).name();
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int x=10;
    char y='A';
    cout<<(x+y)<<"\n"; //implicit conversion  
    float z=5.5;
    cout<<(x+z); //implicit conversion
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int x=15,y=2;
    double z=static_cast<double>(x)/y;  //explicit conversion
    cout<<z;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    float f=6.9;
    //using cast operator
    int b=static_cast<int>(f); //explicit conversion
    cout<<b;
}*/

// swap two numbers in cpp using third variable.
/*#include<iostream>
using namespace std;
int main()
{
    int a=6,b=9;
    cout<<"Before Swapping a="<<a<<" b="<<b<<endl;
    int temp; //third variable.
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping a="<<a<<" b="<<b;
    return 0;
    }*/

/*#include<iostream>
using namespace std;

class Area{  //class formation
    public:
    int length;
    int width;
    int area;

    int area_calculator(){    //function made within class
        return area=length*width;
    }
};
int main(){
    Area s;  //object calling
    s.length=6;
    s.width=9;

    cout<<"area of rectangle is:"<<s.area_calculator()<<endl;
    cout<<"programm sucessfully completed";

    return 0;
}*/

// C++ program to implement
// the above approach
/*#include <iostream>
using namespace std;

// Driver code
int main()
{
	int n = 1634;
	int temp = n;
	int p = 0;

	// Function to calculate
	// the sum of individual digits
	while (n > 0) {
		int rem = n % 10;
		p = (p) + (rem * rem * rem*rem);
		n = n / 10;
	}

	// Condition to check whether
	// the value of P equals
	// to user input or not.
	if (temp == p) {
		cout << ("Yes. It is Armstrong No.");
	}
	else {
		cout << ("No. It is not an Armstrong No.");
	}
	return 0;
}*/

/*#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>n;    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r*r);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;   
return 0;  
}*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of digits raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is Armstrong
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}

