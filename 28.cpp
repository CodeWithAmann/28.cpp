#include<iostream>
using namespace std;
int main ()
{
    int m,i;
    int arr[100];
    cout<<"Enter the number for checking !! is smaller or not "<<endl;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cout<<"Enter the "<<i+1<<" Number :"<<endl;
        cin>>arr[i];
    }
    int min = 1000;
    for(i=1;i<m;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Smaller number is "<<min<<endl;
    return 0;
}
