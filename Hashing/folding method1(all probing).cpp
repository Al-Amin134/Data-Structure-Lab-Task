//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int table_size = 11;
int hash_table[11]= {NULL};

int sum(int a)
{
    int sum1 = 0;
    while(a>0)
    {
        sum1= sum1+(a%100);
        a = a/100;
    }
    return sum1;
}


//Linear part
void linear_probing(int n,int value)
{
    int rem = n % table_size;
    while(hash_table[rem]!=NULL)
    {
        rem = (rem+1)%table_size;
    }
    hash_table[rem] = value;


}
void linear_searching(int n)
{
    int sum1 = sum(n);
    int rem = sum1% table_size;
    while(hash_table[rem]!=NULL)
    {
        if(hash_table[rem]==n)
        {
            cout<<"your data "<<n<<"is found at the positon "<<rem+1;
            return;
        }
        else
        {
            rem = (rem+1)%table_size;
        }
    }
    cout<<"Your data "<<n<<" is not found in the hash_table"<<endl;

}


// plus_3 Part
void plus_3_probing(int n,int value)
{
    int rem = n % table_size;
    // int c=1;
    while(hash_table[rem]!=NULL)
    {
        rem = (rem+3)%table_size;
        // c++;
    }
    hash_table[rem] = value;


}
void  plus_3_searching(int n)
{
    int sum1 = sum(n);
    int rem = sum1% table_size;
    while(hash_table[rem]!=NULL)
    {
        if(hash_table[rem]==n)
        {
            cout<<"your data "<<n<<"is found at the positon "<<rem+1;
            return;
        }
        else
        {
            rem = (rem+3)%table_size;
        }
    }
    cout<<"Your data "<<n<<" is not found in the hash_table"<<endl;

}



//Quadratic part
void quadratic_probing(int n,int value)
{
    int rem = n % table_size;
    int p=1;
    int m;
    while(hash_table[rem]!=NULL)
    {
        m = rem;
        rem = (m+(p*p))%table_size;
        p+=1;


    }
    hash_table[rem] = value;


}
void quadratic_searching(int n)
{
    int sum1 = sum(n);
    int rem = sum1% table_size;
    int p=1;
    int m=1;
    while(hash_table[rem]!=NULL)
    {
        if(hash_table[rem]==n)
        {
            cout<<"your data "<<n<<"is found at the positon "<<rem+1;
            return;
        }
        else
        {
            rem = (rem+m)%table_size;
            p+=2;
            m+=p;
        }
    }
    cout<<"Your data "<<n<<" is not found in the hash_table"<<endl;

}


//main part
int main()
{

    int a,n;
    cout<<" Enter how many number do you want to enter in hash_table"<<endl;
    cin>>n;

    cout<<"for linear probing press l"<<endl;
    cout<<"for plus 3 probing press p"<<endl;
    cout<<"for quadratic probing press q"<<endl;
    char ch;
    cin>>ch;

    cout<<"Enter your "<<n<<" number"<<endl;


    for(int i=0; i<n; i++)
    {
        cin>>a;
        int s = sum(a);

        if(ch=='l')
            linear_probing(s,a);
        else if(ch=='p')
            plus_3_probing(s,a);
        else if(ch=='q')
            quadratic_probing(s,a);
    }

    for(int i=0; i<table_size; i++)
    {
        cout<<hash_table[i]<< " " ;
    }
    cout<<"\nEnter the Number that you want to search from your hash_table"<<endl;
    cin>>n;
    if(ch=='l')
        linear_searching(n);
    else if(ch=='p')
        plus_3_searching(n);
    else if(ch=='q')
        quadratic_searching(n);



}
