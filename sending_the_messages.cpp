#include<iostream>
using namespace std;

//if (momemtNext-momentNow)*a>b then add b(i.e Turn off the Phone);
//else add (momemtNext-momentNow)*a
//if the sum is <= f then return YES else NO


int main(){

    long long test;
    cin >> test;
    for(long long t = 1;t<=test;t++){
        long long  f = 0,n = 0,a = 0,b = 0;
        cin>>n>>f>>a>>b;
//        cout<<"f n a b is: "<<f<<" "<<n<<" "<<a<<" "<<b<<endl;
        int momentNow = 0,momentNext = 0;
        for(long long i = 0; i<n;i++){

          cin>>momentNext;
          if((momentNext - momentNow)*a>b){
                f -= b ;

          }else{f -= (momentNext-momentNow)*a; }
//          cout<<"f: "<<f<<endl;
          momentNow = momentNext;
        }
        if(f>0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}
