//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		

	int stringConversion(string X, string Y){
		int n = X.length();
		int m = Y.length();
		int dp[n + 1][m + 1];
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				dp[i][j] = 0;
			}
		}
		dp[0][0] = 1;
		for (int i = 0; i < X.length(); i++) {
			for (int j = 0; j <= Y.length(); j++) {
				if (dp[i][j]) {
					if (j < Y.length() && (toupper(X[i]) == Y[j]))dp[i + 1][j + 1] = 1;
					if (!isupper(X[i]))dp[i + 1][j] = 1;
				}
			}
		}
		return (dp[n][m]);
	}
	
	
	
	
	
	
	
	
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s1, s2;
   		cin >> s1 >> s2;

   		Solution ob;

   		cout << ob.stringConversion(s1, s2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends