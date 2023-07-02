#include<bits/stdc++.h>
using namespace std;
int postfix_evaluation(string s)
{
    stack<int>st;
    for(int i=0; i<s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            int num=0;
            while(isdigit(s[i]))
            {
                num=num*10+(s[i]-'0');
                i++;
            }
            st.push(num);


        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
             int num1=st.top();
        st.pop();
        int num2=st.top();
        st.pop();

        switch(s[i]){

        case'+':
        st.push(num1+num2);
        break;

        case'-':
        st.push(num2-num1);
        break;

        case'*':
        st.push(num2*num1);
        break;

        case'/':
        st.push(num2/num1);
        break;

        case'^':
        st.push(pow(num2,num1));
        break;



    }
    }
    }
    return st.top();
}
int main()
{
    string s;
    cin>>s;
    int output = postfix_evaluation(s);
    cout<<output<<endl;
    return 0;
}
