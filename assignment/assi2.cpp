#include<string>
#include<iostream>
using namespace std;
/*Input a string of length n and count all the consonants in the given string.*/
int main(){
    string str;
    cout<<"Enter size of string:";
    getline(cin,str);
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        }
        else{
            count++;
        }
        i++;
    }
    cout<<"There are total "<<count<<" consonants in given string." ;
}