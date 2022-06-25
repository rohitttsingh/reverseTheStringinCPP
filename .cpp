#include <bits/stdc++.h>
#define sym "."
using namespace std;
int main() {

    char str[] = "roh.wer.ko.bdf";
    char *p;
    stack<string> s;
    p = strtok(str,sym); 
    int i=strlen(str);
    int cou=0;
    while(i--){
        cou++;
    }
    
    while(p!=NULL){
        s.push(p);
       // cout<<p;
        p = strtok(NULL,sym);
    }
    
    while(!s.empty()){
        cout<<s.top();
        if(cou>0){
        cout<<"."; cou--;
        }
        s.pop();
    }
    return 0;
}
