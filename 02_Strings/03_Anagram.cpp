//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  // Function is to check whether two strings are anagram of each other or not.
  bool areAnagrams(string &s, string &t)
  {
    // Your code here
    vector<int> hash1(256, 0);

    if (s.size() != t.size())
      return false;
    for (int i = 0; i < s.size(); i++)
    {
      hash1[s[i]]++;
      hash1[t[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
      if (hash1[i] > 0)
        return false;
    }
    return true;
  }
};

//{ Driver Code Starts.

int main()
{

  int t;

  cin >> t;

  while (t--)
  {
    string c, d;

    cin >> c >> d;
    Solution obj;
    if (obj.areAnagrams(c, d))
      cout << "true" << endl;
    else
      cout << "false" << endl;
    cout << "~" << endl;
  }
}

// } Driver Code Ends