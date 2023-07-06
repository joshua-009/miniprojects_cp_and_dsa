#include<bits/stdc++.h>
using namespace std;

void encode(){
    char a[50];
    int x,k,final;
    cout<<"Type the message: ";
    cin>>a;
    cout<<"Enter the number of shifts: ";
    cin>>k;
    for(int i=0;a[i]!='\0';i++){
        if(islower(a[i])){
            x=a[i]-'a';
            final=((x+k)%26)+'a';
        }
        else{
            x=a[i]-'A';
            final=((x+k)%26)+'A';
        }
        a[i]=final;
    }
    cout<<"The encoded message is "<<a;
}

void decode(){
    char a[50];
    int x,k,final;
    cout<<"Type the message: ";
    cin>>a;
    cout<<"Enter the number of shifts: ";
    cin>>k;
    for(int i=0;a[i]!='\0';i++){
        if(islower(a[i])){
            x=a[i]-'a';
            final=((x-k)%26)+'a';
        }
        else{
            x=a[i]-'A';
            final=((x-k)%26)+'A';
        }
        a[i]=final;
    }
    cout<<"The encoded message is "<<a;

}
int main(){
    string str;
    cout<<"Type encode to encrypt and decode to decrypt: ";
    cin>>str;
    if(str=="encode"){
        encode();
    }
    else{
        decode();
    }
    
}