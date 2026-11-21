#include<iostream>
using namespace std;

//if # then
//Using double loop find point of row min and row max to get the row edges
//Calculate the half of those two points which is center


int main(){
    int t;
    int n,m;
    char symbol;
    cin>>t;
    for(int test = 0;test<t;test++){
        int x  = 10000000000000 ,y = 0;
        int e = 0,f = 0;
        cin>>n>>m;
        for(int i = 1;i<=n;i++){
                for(int j = 1;j<=m;j++){
                    cin>>symbol;
                    if(symbol == '#'){
                            if(i<x){
                                x = i;
                                y = j;
                            }
                            if(i>e){
                                e = i;
                                f = j;
                            }
                    }
                }

        }
        cout<<(x+e)/2<<" "<<(y+f)/2<<endl;
    }

}

