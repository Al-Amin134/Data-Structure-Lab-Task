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
    else
    {
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
        if(((s1[i]>='0'&&s1[i]<='999999999999')&&(s1[i]!='^'))||(s1[i]==','&&a[a.size()-1]!=','))
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
                if(a[a.size()-1]!=','){
                    a+=",";
                  }
                a+=st.top();
                st.pop();
            }
            st.pop();

        }

    }
    while(!st.empty())
    {
        a+=st.top();
        st.pop();
    }
    return a;
}

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
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
        {
            int num1=st.top();
            st.pop();
            int num2=st.top();
            st.pop();

            switch(s[i])
            {

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
    string in_to_post = infix_to_postfix(s);
    cout<<"Infix_to_postfix"<<" "<<in_to_post<<endl;
    cout<<"postfix evaluation"<<" "<<postfix_evaluation(in_to_post);

}
//A+(B*C-(D/E^F)*G)*H

