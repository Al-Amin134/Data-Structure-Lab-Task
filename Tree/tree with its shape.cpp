#include<bits/stdc++.h>
using namespace std;
int tree[50]= {0};
int table_size = 8;


void print(int i,int f,int p,int c)
{

    if((tree[i]!=NULL)&&(c==1))
    {
        while(f--)
        {
        cout<<" ";
        }
        cout<<tree[i];
        return;
    }
    else if(tree[i]!=NULL)
    {
        while(p>0)
        {
            cout<<" ";
            p--;
        }

        cout<<tree[i];
    }
    else{
        while(p--){
            cout<<" ";
        }
    }

}
int main()
{

    for(int i=0; i<table_size; i++)
    {
        cin>>tree[i];
    }
    int f = pow(2,4)-1;
    int c=1,p=0;
    for(int i=0; i<table_size; i++)
    {
        p = f;
        f=f/2;
        for(int j=1; j<=c; j++)
        {
            if(j>1)i++;
            print(i,f,p,j);

        }
        c*=2;
        cout<<endl;
    }

}
//input: 38 58 55 20 30 0 97 35
/*output:

       38
   58       55
 20   30      97
35

