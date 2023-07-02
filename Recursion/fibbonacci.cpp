#include<bits/stdc++.h>
using namespace std;
int fibb(int x)
{
    if(x==0||x==1){
        return x;
    }
    else return fibb(x-1)+fibb(x-2);
}
int main()
{
    int x;
    cin>>x;
    int i=0;
    while(i<x){
        cout<<fibb(i)<<"  ";
        i++;
    }
}
