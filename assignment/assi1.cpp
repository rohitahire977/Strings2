#include<string>
#include<iostream>
using namespace std;
/*Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.*/
int main(){
    string str;
    cout<<"Enter size of string:";
    getline(cin,str);
    int i=0;
    while(str[i]!='\0'){
        if(i%2==0){
            str[i]='#';
        }
        i++;
    }
    cout<<str;
}