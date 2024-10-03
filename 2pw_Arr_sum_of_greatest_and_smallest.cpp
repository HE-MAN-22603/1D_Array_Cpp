//Given an integer array and its size, find the sum of the greatest and the smallest integer present
//in the array. Here 1< size <101
#include<iostream>
using namespace std;
int main()
{
    int arr_size;
    cout<<"Enter the size of array: ";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enter the elements of the array."<<endl;
    for(int i=0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int min=arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Max: "<<max<<" Min: "<<min<<endl;
    cout<<"Sum of the greatest and the smallest integer is : "<<(max+min)<<endl;
    return 0; 
}