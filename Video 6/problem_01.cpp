//https://www.hackerrank.com/challenges/printing-pattern-2/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=(2*n)-1;i++){
    int a=n;
    for(int j=1;j<=(2*n)-1;j++){
        cout<<a<<" ";
        if(i>j){
            a--;
        }
        if(j>(2*n)-1-i){
            a++;
        }
    }
    cout<<"\n";
}
return 0;
}