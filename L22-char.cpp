#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z') return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrom(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
       if(toLowerCase(name[s])!=toLowerCase(name[e])) return 0;
       else{
        s++;
        e--;
       }
    return 1;
    } 

}
int reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
       swap(name[s++],name[e--]); 
    } 
}
int getlength(char name[])
{
    int count=0;
    for (int i = 0;name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    int len=getlength(name);
    cout<<"Length of string is :"<<len<<endl;
    cout<<"Is enter string is palindrom :"<<checkPalindrom(name,len)<<endl;
    reverse(name,len);
    cout<<"Your name after reverse is : ";
    cout<<name<<endl;
    return 0;
}