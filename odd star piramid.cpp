//odd star piramid

#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"entre odd no.=";
   cin>>n;
   cout<<endl;

   if(n%2==0)
   {cout<<"this is even no.\n This program is valid only for odd numbers so entre a odd no.";
     cin>>n;
     cout<<endl;}

   int m=((n+1)/2);
   int p=((n-1)/2);

   for(int i=1;i<=m;i++)
{

     for(int j=1;j<=(p+1-i);j++)
     cout<<" ";

     for(int k=1; k<=(2*i-1);k++)
        cout<<"*";

     cout<<endl;
}






 }






