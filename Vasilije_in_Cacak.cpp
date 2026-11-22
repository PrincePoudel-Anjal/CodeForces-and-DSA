#include<iostream>

using namespace std;

//if sum of 1 to n < x  then NO
//sum of first k from 1 = min and sum of last k  = max , out of range from min-max is "NO"
//Find  value = max-x(target)
//if value >= n then "NO" otherwise "YES"

int main(){
    int test;
    cin>>test;
    for(int t = 0;t<test;t++){
        long long n,k;
        long long x;
        cin>>n>>k>>x;
        long long int maximum = 0,minimum = 0;
        maximum = (2*k*n-k*k+k)/2;
        minimum = (k*k+k)/2;

        if(x>maximum ||  x<minimum){cout<<"NO"<<endl;continue;}
        long long value = maximum - x;
        long long deductible = 0;

        deductible = (k*2*n-k*k-k)/2;
        if(value<=deductible){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}





