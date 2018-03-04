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

dismat(int s,float r[3][3])
{
 cout<<"matrix=\n";
 for(int i=0;i<s;i++)
 {for(int j=0;j<s;j++)
cout<<setw(4)<<r[i][j]<<setw(4);
cout<<endl;
}
}
 void addmat(int s,float r[3][3],float t[3][3],float z[3][3])
 {
for(int i=0;i<s;i++)
 for(int j=0;j<s;j++)
   z[i][j]=r[i][j]+t[i][j];
 }



 void mulmat(int s,float r[3][3],float t[3][3],float z[3][3])
 {
 for(int i=0;i<s;i++)
 for(int j=0;j<s;j++)
 for(int k=0;k<s;k++)
  z[i][j]=z[i][j]+r[i][k]*t[k][j];

 }

 float detmat(float r[3][3])
 {
     float D;
  D=(r[0][0]*(r[1][1]*r[2][2]-r[1][2]*r[2][1])-r[0][1]*(r[1][0]*r[2][2]-r[1][2]*r[2][0])+r[0][2]*(r[1][0]*r[2][1]-r[1][1]*r[2][0]));
  cout<<"\nD=\n"<<D<<endl;
  return D;
 }

 void mulsca(int s,float x,float r[3][3],float t[3][3])
 {
 for(int i=0;i<s;i++)
 for(int j=0;j<s;j++)
  t[i][j]=x*r[i][j];
 }

 void trans(int s,float x,float r[3][3],float t[3][3])
 {
 for(int i=0;i<s;i++)
 for(int j=0;j<s;j++)
  t[i][j]=r[j][i];
 }

 void inversemat(int s,float v[3][3],float l[3][3])
 { float d[3][3],e[3][3],f[3][3],g[3][3],h[3][3];
   float k,m,n,o,p;
   float c[3][3]={};
 mulmat(3,v,v,c);

m=-(v[2][2]+v[0][0]+v[1][1]);
n=(v[1][1]*v[2][2]-v[1][2]*v[2][1])+(v[0][0]*v[2][2]-v[0][2]*v[2][0])+(v[1][1]*v[0][0]-v[1][0]*v[0][1]);
mulsca(3,m,v,d);
float i[3][3]={n,0,0,0,n,0,0,0,n};

addmat(3,c,d,e);
addmat(3,e,i,f);
cout<<endl<<"f=";
dismat(3,f);

k=detmat(v);
cout<<"\n"<<"k="<<k<<endl;
o=(float(1/k));
cout<<"o="<<o<<endl;


mulsca(3,o,f,l);

 }

 int main()
 {
   float a[3][3];
   float I[3][3];
   getmat(3,a);
   dismat(3,a);

   inversemat(3,a,I);
   cout<<endl<<"********************"<<endl<<"inverse:-"<<endl;
   dismat(3,I);
 }
