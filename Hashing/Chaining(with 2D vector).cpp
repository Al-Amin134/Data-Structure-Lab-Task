#include<bits/stdc++.h>
using namespace std;
void insert_chaining(vector<vector<int>>&table,int size,int data)
{
    int index = data%size;
    table[index].push_back(data);
}
void display(vector<vector<int>>&table)
{
    //  int index = data%size;
    for(int i=0; i<table.size(); i++)
    {
        cout<<"index"<<i<<" : ";
        for(auto &item:table[i])
        {
            cout<<item<<" ";
        }
        cout<<endl;
    }
}
void search_chaining(vector<vector<int>>&table,int item)
{
    for(int i=0; i<table.size(); i++)
    {
        for(auto &it : table[i])
        {
            if(it==item)
            {
                cout<<"The item "<<item<<" has been found at index : "<<i<<endl;
                return;
            }

        }
    }
    cout<<"The item "<<item<<" is not in the table"<<endl;
    return;
}
int  main()
{
    int table_size=11;
    vector<vector<int>>table(table_size);
    insert_chaining(table,table_size,13);
    insert_chaining(table,table_size,4);
    insert_chaining(table,table_size,50);
    insert_chaining(table,table_size,9);
    insert_chaining(table,table_size,61);
    insert_chaining(table,table_size,6);
    display(table);
    search_chaining(table,6);
}
