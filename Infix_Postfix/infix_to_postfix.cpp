#include<bits/stdc++.h>
using namespace std;
int precidence(char c)
{
    if(c=='+'||c=='-')
    {
        return 2;
    }
    else if(c=='*'||c=='/')
    {
        return 3;
    }
    else if(c=='^')
    {
        return 4;
    }
    else {
            return 1;
    }
}

string infix_to_postfix(string s)
{
    string a="";
    stack<char>st;
    string s1 = "(";
    s1+=s;
    s1+=")";

    for(int i=0; i<s1.size(); i++)
    {
        if((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
        {
            a+=s1[i];
        }
        else if(s1[i]=='(')
        {
            st.push(s1[i]);

        }
        else if(s1[i]=='+'||s1[i]=='-'||s1[i]=='*'||s1[i]=='/'||s1[i]=='^')
        {
            if((precidence(s1[i]))>(precidence(st.top())))
            {


                 st.push(s1[i]);


            }
            else
            {
                a+=st.top();
                st.pop();
                st.push(s1[i]);
            }
        }
        else if(s1[i]==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                a+=st.top();
                st.pop();
            }
            st.pop();

        }

    }
    while(!st.empty()){
        a+=st.top();
        st.pop();
    }
    return a;
}
int main()
{
    string s;
    cin>>s;
    cout<<infix_to_postfix(s)<<endl;
}
//A+(B*C-(D/E^F)*G)*H
