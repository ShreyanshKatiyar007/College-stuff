#include<iostream>
using namespace std;
int main()
{
    int n,num,pos,del;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"enter the element you want to insert:"<<endl;
    cin>>num;
    cout<<"enter the position of array where you want to insert the element:"<<endl;
    cin>>pos;
    for(int i=n-1;i>pos-1;i--){
        arr[i+1]=arr[i];
        arr[pos-1]=num;
    }
    cout<<"your element is inserted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter the element you want to delete:"<<endl;
    cin>>del;
    cout<<"enter the postion of the element:"<<endl;
    cin>>pos;
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"array after deletiing element is:"<<endl;
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }


}
