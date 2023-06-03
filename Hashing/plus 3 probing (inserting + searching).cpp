//plush 3 probing
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
        remainder = a[i]%11;
        while(hash1[remainder]!=NULL){
                remainder+=3;
                 remainder = (remainder%cell);
        }



        hash1[remainder] = a[i];

    }
    for(int i=0;i<cell;i++){
        cout<<hash1[i]<<" ";
//searching

}  int item;
    cout<<"Enter a number to search"<<endl;
    cin>>item;
    int rem = item%cell;
    while(hash1[rem]!=NULL){
        if(hash1[rem]==item){
            cout<<"The number has been found at the position "<<rem+1<<endl;
            return 0;

        }
        rem+=3;
        rem=rem%cell;
    }
    cout<<"The number is not found"<<endl;

}
/*
9
54 26 93 17 77 31 44 55 20
*/
