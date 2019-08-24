#include <iostream>

using namespace std;

int function(int a, int b, int c, int d, int e, int f, int g, int h, int i, int z)
{
    z = a + b + c + d + e + f + g - h;
    int j = z + i;
    return j;
}

int main()
{

    cout<<"z = a + b + c + d + e + f + g - h"<<endl;
    cout<<"j = z + i"<<endl;

    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int z;
    int j = function(a,b,c,d,e,f,g,h,i,z);

    cout<<"your a is = ";
    cin>>a;

    cout<<"your b is = ";
    cin>>b;

    cout<<"your c is = ";
    cin>>c;

    cout<<"your d is  = ";
    cin>>d;

    cout<<"your e is = ";
    cin>>e;

    cout<<"your f is = ";
    cin>>f;

    cout<<"your g is = ";
    cin>>g;

    cout<<"your h is = ";
    cin>>h;

    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"your i is = ";
    cin>>i;

    cout<<"=>"<<endl;

    cout<<"your z is = "<<z<<endl;

    cout<<j<<endl;

    return 0;
}
