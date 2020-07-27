
#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,largest;
 

 cout<<"Enter the numbers out of which you have to find the greatest\n ";
 cin>>a>>b>>c>>d;

 largest= (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
 cout<<"The largest number is:"<<largest;
return 0;
}
