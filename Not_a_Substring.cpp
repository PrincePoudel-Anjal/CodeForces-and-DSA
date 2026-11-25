#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <string>

//count total open '(' and close ')' brackets separately
//if it is already () then print NO
//make string with equal open and close brackets like ->   ((())) if total brackets = 3
//search the pattern in the string and if not found then output that string
//if found print the consecutive open close brackets such as -> ()()() if brackets=3

int main(){

    int test;
    string s;
    cin>>test;
    for(int t = 0;t<test;t++){
     string s;
     cin>>s;
     int countOpen = 0,countClose = 0;
     int length = s.size();
     for(int i = 0;i<length;i++){
        if(s[i] == '('){ countOpen++;}
        else{ countClose++; }
     }
     int singles = countClose + countOpen;
     int doubles = 2*(singles);

     string result = "";
     for(int j = 1;j<=doubles;j++){
        if(j<=singles){result += "(";}
        else{result += ")";}
     }

     if(result.find(s) == string::npos){cout<<"YES"<<endl<<result<<endl;continue;}
     else{result = "";
     for(int j = 1;j<=singles;j++){
        result += "(";
        result += ")";
     }
     if(result.find(s) == string::npos){cout<<"YES"<<endl<<result<<endl;continue;}
     else{cout<<"NO"<<endl;}
     }
    }
}


