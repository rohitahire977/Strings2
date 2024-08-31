#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
/*Input an even string and reverse
 its second half.*/
int main(){
    string str="rohitanshi";
    int n=str.length();
    reverse(str.begin()+n/2,str.end());
    cout<<str;
    //cout<<"hello";
}