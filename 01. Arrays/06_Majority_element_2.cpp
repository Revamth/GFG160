//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  // Function to find the majority elements in the array
  vector<int> findMajority(vector<int> &arr)
  {
    int n = arr.size();
    int el1 = -1, el2 = -1;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == el1)
        cnt1++;
      else if (arr[i] == el2)
        cnt2++;
      else if (cnt1 == 0)
      {
        el1 = arr[i];
        cnt1 = cnt1 + 1;
      }
      else if (cnt2 == 0)
      {
        el2 = arr[i];
        cnt2 = cnt2 + 1;
      }
      else
      {
        cnt1--;
        cnt2--;
      }
    }
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == el1)
        cnt1++;
      else if (arr[i] == el2)
        cnt2++;
    }
    vector<int> ans;
    if (cnt1 > (n / 3))
      ans.push_back(el1);
    if (cnt2 > (n / 3))
      ans.push_back(el2);
    if (ans.size() == 2 && ans[0] > ans[1])
      swap(ans[0], ans[1]);
    return ans;
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

    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<int> nums;
    int num;
    while (ss >> num)
    {
      nums.push_back(num);
    }
    Solution ob;
    vector<int> ans = ob.findMajority(nums);
    if (ans.empty())
    {
      cout << "[]";
    }
    else
    {
      for (auto &i : ans)
        cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}
// } Driver Code Ends