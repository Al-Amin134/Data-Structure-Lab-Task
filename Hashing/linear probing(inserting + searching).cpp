//linear
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int cell;
    cout<<"Enter the total number of cell"<<endl;
    cin>>cell;

    int hash1[cell]={NULL};
    int remainder;
    for(int i=0;i<n;i++){
        remainder = a[i]%cell;
        while(hash1[remainder]!=NULL){
                remainder++;
                 remainder = (remainder%cell);
        }



        hash1[remainder] = a[i];

    }
    for(int i=0;i<cell;i++){
        cout<<hash1[i]<<" ";
    }
    int item;
    cout<<"Enter a number to search"<<endl;
    cin>>item;
    int rem = item%cell;
    int cnt = 1;
    while(hash1[rem]!=NULL){
        rem = rem%cell;
        if(hash1[rem]==item){
            cout<<"The number has been found at the position "<<rem+1<<endl;
            return 0;

        }
        rem+=1;
        cnt++;
    }
    cout<<"The number is not found"<<endl;

}
/*
9
54 26 93 17 77 31 44 55 20
*/
