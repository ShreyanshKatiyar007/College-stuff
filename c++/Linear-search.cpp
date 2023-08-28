#include <iostream>
using namespace std;
int main()
{
    int n, m,c=0;
    cout << "enter the size of the array:" << endl;
    cin >> n;
    cout << "enter the elements of array:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "your array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "enter the element you want to search" << endl;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (m==arr[i])
        {
            cout << "Element Found " << endl;
            cout<< "index value of your element is:"<<i<<endl;
            break;
            
        }
        c++;
    }
    if(c==n){
        cout<<"Element not found";
    }
    
    return 0;
}
