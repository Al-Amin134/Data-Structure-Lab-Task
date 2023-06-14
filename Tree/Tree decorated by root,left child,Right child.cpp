#include<bits/stdc++.h>
using namespace std;
int table_size = 8;
int tree[20]={NULL};
void print(int index){
    cout<<tree[index];
    if(tree[index*2+1]!=NULL){
        cout<<"\t\t"<<tree[index*2+1];
    }
    else if(tree[index*2+2]==NULL){
        cout<<endl;
        return ;
    }
    else{
        cout<<"\t\t";
    }
    if(tree[index*2+2]!=NULL){
        cout<<"\t\t"<<tree[index*2+2];
        cout<<endl;
    }
    else{
        cout<<endl;
    }
}
int main()
{
    for(int i=0;i<table_size;i++){
        cin>>tree[i];
    }
    cout<<"Node"<<"\t\t Left"<<"\t\t Right"<<endl;
    for(int i=0;i<table_size;i++){
        if(tree[i]==NULL){
            continue;
        }
        else{
            print(i);
        }
    }

}
