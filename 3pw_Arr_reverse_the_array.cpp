//Given an integer array and its size, reverse the array and print it . Here 1<size<101
#include<iostream>
using namespace std;
int main()
{
    int arr_size;
    cout<<"Enter the size of array: ";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enter the elements of array."<<endl;
    for(int i= 0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Reverse of the array is:"<<endl;
    for(int i = arr_size-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}