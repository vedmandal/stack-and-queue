#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void duplicateparenthesis(){
    string str;
    getline(cin,str);
    string ans="true";
    stack<char>st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch==')'){
            if(st.top()=='('){
                ans="true";
            }else{
                while(st.top()!='('){
                    st.pop();
                    
                }
                st.top();
        }
        }else{
            st.push(ch);
        }
    }
    cout<<ans;
    
}
int main(){
    duplicateparenthesis();

}
