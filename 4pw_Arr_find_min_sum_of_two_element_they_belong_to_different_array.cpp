#include<iostream>
using namespace std;
int main()
{
    int arr_size;
    cout<<"Enter the size of array: ";
    cin>>arr_size;
    int arr1st[arr_size];
    cout<<"Enter the elements of the 1st array."<<endl;
    for(int i =0; i<arr_size; i++)
    {
        cin>>arr1st[i];
    }
    int arr2nd[arr_size];
    cout<<"Enter the elements of the 2nd array."<<endl;
    for(int i =0; i<arr_size; i++)
    {
        cin>>arr2nd[i];
    }
    int min1st=arr1st[0];
    for(int i=0; i<arr_size; i++)
    {
        if(arr1st[i]<min1st)
        {
            min1st=arr1st[i];
        }
    }
    int min2nd=arr2nd[0];
    for(int i=0; i<arr_size; i++)
    {
        if(arr1st[i]<min2nd)
        {
            min2nd=arr2nd[i];
        }
    }
    cout<<"Min element from 1st array is: "<<min1st<<" Min element from 2nd array is: "<<min2nd<<endl;
    cout<<"Min sum of two different array is : "<<(min1st+min2nd)<<endl;
    return 0;
}