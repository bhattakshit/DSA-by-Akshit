//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        
        for(int i =0;i<str.length();i++){
            int number =0;
            char ch=str[i];
            number=ch-'a';
            arr[number]++;
            
        }
        int maxi=-1, ans=0;
        for(int i=0;i<26;i++)
        {     if(maxi<arr[i]){
               maxi=arr[i];
               ans=i;
        }
        }
        return 'a'+ans;
        
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends