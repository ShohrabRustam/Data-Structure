//reverse a string
#include<iostream>
#include<conio.h>
using namespace std;

int strlen(char * str) {
  int len = 0; 
  while (*str != '\0') {
    len++;
    str++;
  }
  return len;
}

void reverse(char* str, int len) {
  for(int i=0; i<len/2; i++) {
    char temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
  }
}

int main() {
  char str[100];
  puts("enter the string for reverse ");
  gets(str);
  reverse(str, strlen(str));
  cout<<str<<endl;
  return 0;
}