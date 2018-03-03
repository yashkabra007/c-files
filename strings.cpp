//strings and ascii code of their chars

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char str1[4]="tta";
    char *ptr1;
    ptr1=str1;
    cout<<setw(6)<<"ALPH"<<setw(6)<<"ASCII"<<endl;
    for(int i=0;i<3;i++)
    {
    cout<<setw(5)<<*ptr1<<setw(5)<<int(*ptr1)<<endl;
    ptr1++;
    }
    cout<<"\n";

    char str2[4]="tta";
    char temp=str2[0];
    for(int j=0;j<2;j++)
    {
      if(str2[j]>str2[j+1])
      {

       temp=str2[j];
      }
      str2[j]=str2[j]<str2[j+1]?str2[j]:str2[j+1];
      str2[j+1]=temp;

    }
    cout<<setw(5)<<str2<<endl;
    return 0;
}










