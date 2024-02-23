#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void subset(vector<int> &output,int i,vector<int> &nums)
{
    if(i==nums.size())
    {
        subsets.push_back(output);
        return ;
    }

    // exclude case
    subset(output,i+1,nums);

    // include case
    output.push_back(nums[i]);
    subset(output,i+1,nums);
    output.pop_back();

}

int main ()
{
    int n;
    cin>>n;
       vector<int> output;

    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    subset(output,0,nums);

    for (auto output : subsets)
    {
        for(auto x : output)
        {
            cout<< x <<" ";
        }
        cout<<endl;
    }

 

}