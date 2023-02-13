#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int str_len = str.length();
    for(int i=str_len-1;i>=0;i--){
        cout<<str[i];
    }cout<<"\n";
return 0;
}