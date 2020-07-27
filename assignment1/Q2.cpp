#include<iostream>
using namespace std;
int main()
{
int arr[10],i,n,max2,min2;
cout<<"enter limit for array:";
cin>>n;
for(i=0;i<n;i++)
    cin>>arr[i];
for(i=0;i<n;i++)
{
     for(j=i;j<n;j++)
     {
          If(arr[i]<arr[j])
           {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
      }
}
cout<<"max2 is:"<<arr[1];
cout<<"min2 is:"<<arr[n-2];
return 0;
}
