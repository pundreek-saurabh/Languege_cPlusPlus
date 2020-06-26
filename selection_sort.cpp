//contains error need to be fixed

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[]={5,4,1,3,2};
    int size=5,i,j,minIndex;
    int temp;
    cout<<"unsorted array is :";
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<< endl;
    }
    for(i=0;i<size;i++) //loop for running till last element
    {
        minIndex=i;
        for(j=i+1;j<size;j++) //loop for comparing all elements to get the smallest one
        {
            if(arr[minIndex]>arr[j])
            arr[minIndex]=arr[j];
        }
        //for swapping smallest got element to previous one ;
        temp= arr [minIndex];
        arr[minIndex]>arr[i];
        arr[i]=temp;
    }
    cout<<" Sorted array is :";
    for(i=0;i<size; i++)
    {
        cout<<arr[i];
        cout<< endl;
    }
    return 0;
}