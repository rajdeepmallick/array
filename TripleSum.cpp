#include<bits/stdc++.h>
using namespace std;

bool check(int *a,int n,int sum){
    sort(a,a+n);
    int l,r;
    for(int i=0;i<(n-2);i++){
        l=i+1;
        r=n-1;
        while(l<r){
            if((a[i]+a[l]+a[r])==sum)
                return true;
            else if((a[i]+a[l]+a[r])>sum)    
                r--;
            else if((a[i]+a[l]+a[r])<sum)
                l++;
        }
    }
    return false;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<check(a,n,x)<<endl;     
	}
	return 0;
}



//when the sum is zero
//using hasing

bool findTriplets(int arr[], int n){ 
    for(int i=0;i<(n-2);i++){
        unordered_set<int>s;
        for(int j=i+1;j<n;j++){
            int x=-(arr[i]+arr[j]);
            if(s.find(x)!=s.end())
                return true;
            else
                s.insert(arr[j]);
        }
    }
    return false;
}
