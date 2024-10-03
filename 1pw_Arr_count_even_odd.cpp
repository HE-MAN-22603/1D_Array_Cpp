//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
using namespace std;
int main()
{
    int arr_size,oddcount=0,evencount=0;
    cout<<"Enter the size of the array : ";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enter the elements of the array."<<endl;
    for(int i= 0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<arr_size; i++)
    {
        if(arr[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    cout<<"Even : "<<evencount<<" odd : "<<oddcount;
    return 0;
}