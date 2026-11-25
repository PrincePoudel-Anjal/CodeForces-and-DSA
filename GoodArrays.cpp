#include<iostream>
#include<bits/stdc++.h>

//if No 1 then it is YES
//if 1 then count no of 1 which is minrequired
//find total non 1 numbers and calculate total supply which can be done
//if supply<minrequired say NO otherwise say YES

using namespace std;

int main(){

    int test;
    cin>>test;

    for(int t=0;t<test;t++){
     int n;
     cin>>n;
     long long num;
     int count1 = 0;
     long long supply = 0;
     for(int i = 0;i<n;i++){

        cin>>num;
        if(num == 1){
            count1++;
        }else{
                supply += num-1;
        }
     }
     if(n==1){cout<<"NO"<<endl;continue;}
     if(count1>supply){
        cout<<"NO"<<endl;
     }else{
        cout<<"YES"<<endl;
     }
    }

}


