#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;
   int flag = 1;
   cin>>str;
   int str_len = str.length();
   for(int i=0;i<(str_len/2);i++){
    if(str[i]!=str[str_len-1-i]){
        flag = 0;
    }
   } 
   if(flag == 1){
    cout<<"string is plandrome\n";
   }
   else{
    cout<<"String is not plandrome\n";
   }
return 0;
}