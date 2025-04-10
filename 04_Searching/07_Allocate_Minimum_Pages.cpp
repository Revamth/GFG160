//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  bool isPossible(vector<int> &arr, int pages, int k)
  {
    int cnt = 1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] > pages)
        return false;

      if (sum + arr[i] <= pages)
      {
        sum += arr[i];
      }
      else
      {
        sum = arr[i];
        cnt++;
      }
    }
    return cnt <= k;
  }
  int findPages(vector<int> &arr, int k)
  {
    int n = arr.size();
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    if (k == 1)
      return high;
    if (k == n)
      return low;
    if (k > n)
      return -1;
    while (low <= high)
    {
      int mid = (low + high) / 2;

      if (isPossible(arr, mid, k))
      {
        high = mid - 1;
      }
      else
        low = mid + 1;
    }
    return low;
  }
};

//{ Driver Code Starts.

int main()
{
  int test_case;
  cin >> test_case;
  cin.ignore();
  while (test_case--)
  {

    int d;
    vector<int> arr, brr, crr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }
    getline(cin, input);
    ss.clear();
    ss.str(input);
    while (ss >> number)
    {
      crr.push_back(number);
    }
    d = crr[0];
    int n = arr.size();
    Solution ob;
    int ans = ob.findPages(arr, d);
    cout << ans << endl;

    cout << "~"
         << "\n";
  }
  return 0;
}
// } Driver Code Ends