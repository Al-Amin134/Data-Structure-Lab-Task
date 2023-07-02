#include<bits/stdc++.h>
using namespace std;


void towers_of_hanoi(int num_of_disk,char source, char aux,char destination)

{

if(num_of_disk==1)
    {
        cout<<" Move disk from "<<source<<" to "<<destination<<endl;
        return;
    }
    towers_of_hanoi(num_of_disk-1,source,destination,aux);
     cout<<" Move disk from "<<source<<" to "<<destination<<endl;
     towers_of_hanoi(num_of_disk-1,aux,source,destination);

}
int main(){

    int num_of_disk;
    cin>>num_of_disk;
    towers_of_hanoi(num_of_disk,'A','B','C');

}
