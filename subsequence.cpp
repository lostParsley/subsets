#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> subsets;
void subseq(vector<string> &output,int i,vector<string> &str)
{
    if(i==str.size())
    {
        subsets.push_back(output);
        return ;
    }

    // exclude case 
    subseq(output,i+1,str);

    //include case
    output.push_back(str[i]);
    subseq(output,i+1,str);
    output.pop_back();

}
int main ()
{
    int n;
    cin >> n;
    vector<string> str(n);
    vector<string> output;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    subseq(output,0,str);

    for(auto output : subsets)
    {
        for(auto x : output)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}