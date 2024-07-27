#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int sum=0;
    int avg=0;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    int arr[size];
    for(int i=1; i<=size; i++)
    {
        cout<<"Enter digit " << i << " : ";
        cin>>arr[i];

    }

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    avg=sum/size;
    cout<<"Average sum: "<<avg;

    return 0;
}
