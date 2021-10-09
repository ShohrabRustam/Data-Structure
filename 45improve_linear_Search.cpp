#include<iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length; 
};
void insert_elements(struct Array arr,int length)
{
     cout<<"enter the elemets into the array  \n";
    for(int i=0;i<length;i++)
    {
        cin>>arr.A[i];
    }
}
int display(struct Array arr)
{
    cout<<"the array is "<<endl;
     for (int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
    return 0;
}
int swap(int a,int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}
int search(struct Array arr,int key)
{
    cout<<"the array is "<<endl;
     for (int i=0;i<arr.length;i++)
    {
        if (key==arr.A[i])
        {
        if(i>0)
             swap(arr.A[i],arr.A[i-1]);
            
        cout<<"Sucessfully at index  :"<< i<<endl;
        }
    }

    return 0;
}
int main()
{
    struct Array a;
    cout<<"enter the size of the array\n";
    cin>>a.size;
    a.A= new int[a.size];
    cout<<"enter the length of the array \n";
    cin>>a.length;
   
    insert_elements(arr,a.length);
    display(arr);
    int key;
    cout<<"enter the key to search\n";
    cin>>key;
    search(arr,key);

}