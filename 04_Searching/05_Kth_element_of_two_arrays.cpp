//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  int kthElement(vector<int> &a, vector<int> &b, int k)
  {
    int n = a.size();
    int m = b.size();

    int i = n - 1, j = 0;
    while (i >= 0 && j < m - 1)
    {
      if (a[i] > b[j])
      {
        swap(a[i], b[j]);
        i--;
        j++;
      }
      else
        break;
    }

    if (k <= a.size())
    {
      sort(a.begin(), a.end());
      return a[k - 1];
    }
    else
    {
      sort(b.begin(), b.end());
      return b[k - n - 1];
    }
  }
};

//{ Driver Code Starts.

// Driver code
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    int n, m, k;
    cin >> k;
    cin.ignore();
    string input;
    int num;
    vector<int> a, b;

    getline(cin, input);
    stringstream s2(input);
    while (s2 >> num)
    {
      a.push_back(num);
    }

    getline(cin, input);
    stringstream s3(input);
    while (s3 >> num)
    {
      b.push_back(num);
    }

    Solution ob;
    cout << ob.kthElement(a, b, k) << endl
         << "~\n";
  }
  return 0;
}
// } Driver Code Ends