// matrix
#include<iostream>
#include<iomanip>
using namespace std;

void getmat(int s,float r[3][3])
{
 cout<<"entre mat=\n";
 for(int i=0;i<s;i++)
 for(int j=0;j<s;j++)
  cin>>r[i][j];
}

 void dismat(int s,float r[3][3])
{
 cout<<"matrix=\n";
 for(int i=0;i<s;i++)
 {for(int j=0;j<s;j++)
cout<<setw(4)<<r[i][j]<<setw(4);
cout<<endl;
}
}
int main()
{



   float a[3][3];
    getmat(3,a);
   dismat(3,a);

    int c,d,e,D=1;


  e=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
  c=-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
  d=a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
  D=c+d+e;
  cout<<"\nD=\n"<<D<<endl;
 }
