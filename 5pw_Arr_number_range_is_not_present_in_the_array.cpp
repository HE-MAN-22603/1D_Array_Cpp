#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr_size,count=0;
    cout<<"Enter the size of array: ";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0 ; i < arr_size; i++)
    {
        cin>>arr[i];
    }
//5 2 1 6 0
    sort(arr, arr+arr_size);
// sorted : 0 1 2 5 6
    for(int i=0 ; i < arr_size;i++)
    {
        while(arr[i]>count)
        {
            cout<<"Missing no. is : "<<count<<endl;
            count++;
        }

        if(arr[i]==count)
        {
            count++;
        }
    }
    //if cont is greater then array size stop
//    while(count <= arr_size) {
//        cout << "Missing number is: " << count << endl;
//        count++;
//    }
    return 0;
}
