//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
   int nextHappy(int N){
        // code here
        int current = N;
        while(true){
            current++;
            int flag = 1;
            
            int temp = current;
            int sum = 0;
            set<int>st;
            while(true){
                sum = 0;
                while(temp>0){
                    sum+=(temp%10)*(temp%10);
                    temp/=10;
                }
                if(st.find(sum)!=st.end()){
                    break;
                }
                st.insert(sum);
                if(sum==1){
                     return current;
                }
                temp = sum;
            }
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends