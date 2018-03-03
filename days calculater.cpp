// no of days passed in a year
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int d,m,y;
    cout<<"date,month,year="<<endl;
    cin>>d>>m>>y;
   int days[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=d;
    if(y%4==0)
    {
        days[1]=29;

    }

    if(d<=days[m-1])
    {
        for(int i=0;i<(m-1);i++)






        {


        sum+=days[i];
        }
        cout<<"days="<<sum;

    }
     else
     {
         cout<<"error";
     }

}
