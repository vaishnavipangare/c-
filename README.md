// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int arr[50], num,temp, i, j;
    cout<<"1,2,3,4,5,6,7,8,9,10";
    cin>>num;
    for(i=0;i<num; i++)
    {
        cout<<"Enter the element"<<i+1<<":";
        cin>>arr[i];
    }
    for(i=0,j=num-1;i<num/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
