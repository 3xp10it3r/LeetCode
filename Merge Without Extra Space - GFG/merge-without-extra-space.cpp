//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        // n = 4, arr1[] = [0 3 5 7] 
        // m = 5, arr2[] = [1 2 6 8 9]
        
        void merge(long long a1[], long long a2[], int n, int m) 
        { 
            int l = n-1, r = 0;
            while(l>=0 && r < m){
                if(a1[l] > a2[r]) {
                    swap(a1[l],a2[r]);
                    l--;
                    r++;
                }else{
                    l--;
                }
            }
            sort(a1,a1+n);
            sort(a2,a2+m);
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends