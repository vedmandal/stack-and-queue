#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> NextGreaterElement(vector<int>arr)
{
  int n = arr.size();
  vector<int>nge(n, 0);
  nge[n - 1] = -1;
  stack<int>st;
  st.push(arr[n - 1]);
  for (int i = n - 2; i >= 0; i--)
  {
    while (st.size() > 0 && st.top() <= arr[i])
    {
      st.pop();
    }
    if (st.size() == 0)
    {
      nge[i] = -1;
    }
    else {
      nge[i] = st.top();
    }
    st.push(arr[i]);
  }
  return nge;
}

int main(){
   vector<int>arr={3,5,2,1,6,7,8,4};

    vector<int>arr=NextGreaterElement(arr);
    for(int val:arr){
        cout<<val<<" ";
    }

}

