//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        map<pair<int,int>,int> mp;
        int count = 0;
        
        for(int i=0;i<n;i++){
            int num = numerator[i];
            int den = denominator[i];
            int hcf = __gcd(num,den);
            // cout << "hcf : " << hcf << endl;
            num = num/hcf;
            den = den/hcf;
            // cout << num << " " << den << endl;
            // Approach: suppose we have 1/3
            // and problem is to find pairs of fractions whose sum equals 1
            // den-num,den => 3-1/3 => 2/3; it means we have to find 2/3
            if(mp.find({den-num,den})!= mp.end()){
                count+=mp[{den-num,den}];
                // cout << "mp1 : " << mp[{den-num,den}] << endl;
            }
            mp[{num,den}]++;
            // cout << "mp2 : " << mp[{num,den}] << endl;
            // cout << "--------------- " << i << " ---------------" << endl;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends