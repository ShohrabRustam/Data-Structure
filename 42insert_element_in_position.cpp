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
int insert(struct array * arr,int index,int x)
{
   if (index>=0 && index<=arr->length) 
   
       for(int i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
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
    int index,element;
    cout<<"enter the index and element to insert\n";
    cin>>index>>element;
   insert(&arr,index,element);
   return 0;
} 