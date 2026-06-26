#include<bits/stdc++.h>
using namespace std;
/* //using loop
int fibo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    else return fibo(n-1) + fibo(n-2);
}
int  main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){

        cout<<fibo(i)<<" "; 
    }
} */


void fibo(int n,int a, int b){
    if(n==0) return;
    cout << a << " ";
    return fibo(n-1,b,a+b); 
}
int main(){
    int n;
    cin >> n;
    fibo(n,0,1);
}