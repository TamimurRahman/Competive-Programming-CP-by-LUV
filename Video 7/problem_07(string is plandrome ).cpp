#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str_rev;
    getline(cin,str);
    int str_len = str.length();
    for(int i=str_len-1;i>=0;i--){
       str_rev.push_back(str[i]);
    }
    if(str==str_rev)
    cout<<"String is plandrome"<<endl;
    else
    cout<<"String is not plandrome"<<endl;
return 0;
}