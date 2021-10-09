#include<iostream>
using namespace std;
struct matrics
{
	int A[10];
	int n;
};
int set(struct matrics *m,int i,int j,int x)

{
	if(i==j)
	m->A[i-1]=x;
}

int get(struct matrics m,int i, int j)
{

if(i==j)
return m.A[i-1];
else 
return 0;

} 

void display(struct matrics m)
{
int i,j;
for (int i=0;i<m.n;i++)
{
	for (j=0;j<m.n;j++)
	{
		if(i==j)
		cout<<m.A[i-1] << " ";
		else 
		cout<<"0 ";
	}
	cout<<"/n"<<endl;
}
}
int main ()
{
	struct matrics m;
	m.n=4;
set(&m,1,1,1);set(&m,2,2,2);set(&m,3,3,3);set(&m,4,4,4);
	display(m);

}