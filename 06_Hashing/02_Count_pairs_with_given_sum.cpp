//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  int countPairs(vector<int> &arr, int target)
  {
    int n = arr.size();
    int cnt = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
      int diff = target - arr[i];
      if (mpp.find(diff) != mpp.end())
        cnt += mpp[diff];
      mpp[arr[i]]++;
    }
    return cnt;
  }
};

//{ Driver Code Starts.

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }
    int target;
    cin >> target;
    cin.ignore();
    Solution ob;
    int res = ob.countPairs(arr, target);

    cout << res << endl
         << "~" << endl;
  }
  return 0;
}
// } Driver Code Ends