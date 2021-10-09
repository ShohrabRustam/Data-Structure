#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[100];
        int i, length;
      

        cout<<"\n Enter String : ";
        cin>>str;    
        int H[26];
        for(int i=0;i<26;i++)
        H[i]=0;

        length = strlen(str);    

        for(i=0;i < str[i]!='\0';i++)
	{	
     H[str[i]-97]+=1;
 }
     for(i=0;i<26;i++){
	 
     if(H[i]>=1)
	 
     cout<<char(i+97)<<"\t"<<H[i]<<"times"<<endl;

	}
 
    
}