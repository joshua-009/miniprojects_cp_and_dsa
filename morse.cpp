#include<bits/stdc++.h>
using namespace std;

void textToMorse( map< char, string >mp , string str ){
    string morse = "";
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])) morse.append(mp[toupper(str[i])]);
        else if(isdigit(str[i])) morse.append(mp[(str[i])]);
        morse.append(" ");
    }
    cout<<str<<" in Morse Code: "<<morse<<"\n\n";
}

void morseToText(map<char,string>mp, string str){
    string text="", morse="";
    int i=0;
    while(i<str.length()){
        morse.clear();
        for(; i<str.length() && !isspace(str[i]); i++){
            morse+=str[i];
        }
        for (auto it : mp) {
            if (it.second == morse) {
                text.push_back(it.first);
                break;
            }
        }
        
        while (i < str.length() && isspace(str[i])){
            i++;
        }
    }
    cout<<str<<" in Text is: "<<text<<"\n\n";
}

int main(){
    map<char,string> mp ={
        {'A',".-"}, {'B',"-..."}, {'C',"-.-."}, {'D',"-.."}, {'E',"."}, {'F',"..-."}, {'G',"--."}, {'H',"...."}, {'I',".."}, {'J',".---"}, {'K',"-.-"}, {'L',".-.."}, {'M',"--"}, {'N',"-."}, {'O',"---"}, {'P',".--."}, {'Q',"--.-"}, {'R',".-."}, {'S',"..."}, {'T',"-"}, {'U',"..-"}, {'V',"...-"}, {'W',".--"}, {'X',"-..-"}, {'Y',"-.--"}, {'Z',"--.."}, {'0',"-----"}, {'1',".----"}, {'2',"..---"}, {'3',"...--"}, {'4',"....-"}, {'5',"....."}, {'6',"-...."}, {'7',"--..."}, {'8',"---.."}, {'9',"----."} 
    };
    int n;
    string str;
    while(1){
        cout<<"MENU\nType 1 to convert Text to Morse Code\nType 2 to convert Morse Code to Text\nType 3 to exit"<<endl;
        cin>>n;
        if(n==1){
            cout<<"Enter the text you want to convert:";
            cin.ignore();
            getline(cin,str);
            textToMorse(mp,str);
        }
        else if(n==2){
            cout<<"Enter the morse code with space for letter:";
            cin.ignore();
            getline(cin,str);
            morseToText(mp,str);
        }
        else if(n==3){
            exit(0);
        }
    }
    
}
