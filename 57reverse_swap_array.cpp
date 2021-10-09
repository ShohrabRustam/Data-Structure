#include<iostream>
using namespace std;
void swap(int arr[],int n)
{ int temp;
    for(int i=0;i<n/2;i++)
    {
        
            temp=arr[n-i-1];
            arr[n-i-1]=arr[i];
            arr[i]=temp;
        
    }
}
    void display(int arr[],int n)
    {
	
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}

int main()
{
    int num;
    cout<<"enter the size of the array"<<endl;
    cin >>num;
    int array[num];
    cout<<"enter the elements into the array"<<endl;
    for (int i=0;i<num;i++)
    {
        cin >> array[i];
    }
    cout<<"the reverse array is :"<<endl;
    swap(array,num);
    display(array,num);
    return 1;
}