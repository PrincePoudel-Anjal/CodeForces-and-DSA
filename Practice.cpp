#include<iostream>
using namespace std;


void rev(char str[],int n){
    int s = 0;
    int e = n-1;
    cout<<"Before:"<<str<<endl;
    while(s<e){
      swap(str[s++],str[e--]);
    }
    cout<<"After:"<<str;
}
int main(){

    char name[50] = "Prince";
    int n = sizeof(name)/sizeof(name[0]);
    rev(name,n);
    return 0;

}
