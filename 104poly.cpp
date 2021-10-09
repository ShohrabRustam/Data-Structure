#include<iostream>
using namespace std;
struct term
{
	int coff;
	int exp;
};
struct poly
{
	int n;
	struct term ;
};
int main()
{
	struct poly p;
    struct term t;
	cout<<"enter the non zero terms "<<endl;
	cin>>p.n;
	p.t= new term[p.n];
	cout<<"enter the polynomial"<<endl;
	for (int i=0;i<p.n;i++)
	{
		cout<<"enter "<<i+1<<" coff"<<endl;
		cin >>p.t[i].coff;
		cout<<"enter "<< i+1 <<" exponent"<<endl;
		cin >>p.t[i].exp;
	}
}