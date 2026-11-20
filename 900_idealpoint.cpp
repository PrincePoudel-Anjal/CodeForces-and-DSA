#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  //Eliminate which is not in range
  //make [left, right ]
  //if newleft > left put left = newleft and if newright < right put right = newright
  //repeat this for all segments if both left = right then "YES" oherwise "NO"

  int t;
  int n,k;

  int newl,newr;
  cin>>t;
  for(int test = 0;test<t;test++){
    int l = 0,r = 1000;
    cin>>n>>k;
    for(int i = 0;i<n;i++){
        cin>>newl>>newr;
        if(k<newl || k>newr){continue;}
        if(newl > l){l = newl;}
        if(newr< r){r = newr;}
    }
    if(l == r){cout<<"YES"<<endl;}
    else{ cout<<"NO"<<endl;}
  }
}
