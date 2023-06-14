#include<bits/stdc++.h>
using namespace std;
void insert_tree(int value,int p,int prev)
{
    cout<<"/4t";


}
int main()
{
    int n,value;
    cin>>n;
    int c=1;
    int p=pow(2,n)-1;
    while(c<=n){
            int m=c;
    int prev=p;
    p=p/2;
    while(m--){
            cin>>value;
    insert_tree(p,value,prev);
    }

    c++;
      cout<<endl;
    }
}
