#include<iostream>
using namespace std;
struct array
{
    int *A;
    int size;
    int length;
};
int del(struct array * arr,int index)
{
   if (index>=0 && index<=arr->length) 
   {
     int x=0;
       for(int i=index;i<arr->length-1;i++)
        {
            arr->A[index]=x;
            arr->A[i]=arr->A[i+1];
            
            arr->length--;
        }
   }
        return 0;

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
    arr.A = new int [arr.size];//dynamic decleare the size of an array
    arr.length=0;
    cout<<"enter how many numbers"<<endl;
    cin>>n;
    cout<<"enter the "<<n<<" elements in array"<<endl;
    for(i=0;i<n;i++)
    {
       cin>>arr.A[i];
    }
    int index;
    cout<<"enter the index to delete the elements \n";
    cin>>index;
    del(&arr,index);
    return 0;
} 