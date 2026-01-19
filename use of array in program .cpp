#include<iostream>
using namespace std;
int main()
{
int a[5],k,total;
float avg;
for(k=0;k<5;k++)
{
cout<< "enter a number";
cin>>a[k];
}
total=0;
for(k=0;k<5;k++)
total =total+a[k];
avg=total/5.0;
cout<<"total="<<total<<endl;
cout<<"average="<<avg;
}
    
    
    