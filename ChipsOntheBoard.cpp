#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//Find sum of two arrays sum1 and sum2
//do add1 = sum1 + n*(small of a[0])
//do add2 = sum2 + n*(small of b[0])
// if add1<add2 print add1 else add2


int main(){
    int t;
    cin>>t;
    for(int test = 0;test<t;test++){
        long long n;
        cin>>n;
        vector<long long> a;
        vector<long long> b;
        vector<long long> c;
        long long sum1=0,sum2=0;
        for(long long i = 0;i<n;i++){
            int value;
            cin>>value;
            a.push_back(value);
            sum1 += value;
        }
        for(long long i = 0;i<n;i++){
            int value;
            cin>>value;
            b.push_back(value);
            sum2 += value;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long sum = 0;
        long long add1 = sum1 + n*b[0];
        long long add2 = sum2 + n*a[0];
        if(add1<add2){sum = add1;}
        else{sum = add2;}

        cout<<sum<<endl;
    }
}







