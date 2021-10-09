#include<iostream>
using namespace std;
struct array
{
    int *A;
    int size;
    int length;
};
void append_add(struct array *arr,int x)
{
    if (arr->length<arr->size)
    arr->A[arr->length++]=x;
}
int display(struct array arr)
{
    cout<<"the array is "<<endl;
     for (int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
    return 0;
}
int main()
{
    int n,i;
    struct array arr;
    cout<<"enter the size of an array"<<endl;
    cin>>arr.size;
    arr.A = new int [arr.size];
    arr.length=0;
    cout<<"enter how many numbers"<<endl;
    cin>>n;
    cout<<"enter the "<<n<<" elements in array"<<endl;
    for(i=0;i<n;i++)
    {
       cin>>arr.A[i];
    }
   arr.length=n;
   cout<<"before append the array was"<<endl;
   display(arr);
   int element;
   cout<<"enter the element to add into the array"<<endl;
   cin>>element;
   append_add(&arr,element);
   cout<<"after insert the arry is "<<endl;
   display(arr);
   return 0;
} 