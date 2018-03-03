// sin program

#include<cmath>
#include<iostream>
using namespace std;

int main()

{
    const float PI=3.14;
    float n1;
    cout<<"enter the angle in degrees n1=";
    cin>>n1;

    float n2;
    n2= n1*(PI/180);

    float n3,n4,n5;

    n3=sin(n2);
    cout<<"sin(n1)=";
    cout<<n3<<endl;

    cout<<"cos(n1)=";
    n4=cos(n2);
    cout<<n4<<endl;

    cout<<"tan(n1)=";
    n5=tan(n2);
    cout<<n5;

    return 0;





}
