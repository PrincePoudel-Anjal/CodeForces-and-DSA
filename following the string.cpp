#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// First initialize map as {string,int} i.e {a,0}{b,0}{c,0}...etc
// initialize string s and Input traceValue
// From dict which it.second == traceValue add its string to s  then update the int part by +1
// print the string s at the end



int main(){

    int test;
    cin>>test;

    for(int t = 0;t<test;t++){
        map<string,int> dict;
        int x = 97;
        for(int i = 0;i<26;i++){
            char c = (char)x;
            string alphabets = string(1,c);
            dict.insert({alphabets,0});
            x++;
            }
        int n;
        cin>>n;
        int traceValue;
        string s = "";
        for(int i = 0;i<n;i++){
            cin>>traceValue;
            for(auto& it:dict){
                if(it.second == traceValue){
                        it.second += 1;
                        s += it.first;
                        break;
                }
            }
        }
        cout<<s<<endl;
    }
}









