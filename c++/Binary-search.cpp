#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int arr[5]={10,20,30,40,50};
    int start=0;
    int end=4;
    cout<<"your array is:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the element you want to search:"<<endl;
    cin>>n;
    while( start <=end)
    {
        int mid = (start + end)/2;
        if (n==arr[mid]){
            cout<<"element found at "<<mid<<" index"<<endl;
            break;
        }
        else if (n>arr[mid])
        {
            start=mid+1;
        }
        else
        end=mid-1;
    }
}
