//reverse a string
#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{
	int i,j;
  char str[100];
  puts("enter the string for reverse ");
  gets(str);
  int count =0;
  char rstr[100];
  for ( i=0;str[i]!='\0';i++)
  {
  
  }
  i=i-1;
  for( j=0;i>=0;i--,j++)
  {
  	rstr[j]=str[i];
  }
  rstr[j]='\0';
  cout<<"the reverse string is :"<< rstr<<endl;
 

}