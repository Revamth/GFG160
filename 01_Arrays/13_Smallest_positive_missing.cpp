//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  // Function to find the smallest positive number missing from the array.
  int missingNumber(vector<int> &arr)
  {
    int n = arr.size();
    unordered_map<int, int> mpp;
    for (auto it : arr)
      mpp[it]++;

    for (int i = 1; i <= n; i++)
    {
      if (mpp.find(i) == mpp.end())
        return i;
    }

    return n + 1;
  }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main()
{

  // taking testcases
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

    Solution ob;
    int result = ob.missingNumber(arr);
    cout << result << "\n";

    cout << "~"
         << "\n";
  }
  return 0;
}
// } Driver Code Ends