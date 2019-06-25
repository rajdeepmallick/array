#include<bits/stdc++.h>
using namespace std;

bool check(long long *a,long long *b,int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    for(int i=0;i<n;i++){
        if(s.find(b[i])==s.end())
            return false;
    }
    s.clear();
    for(int i=0;i<n;i++)
        s.insert(b[i]);
    for(int i=0;i<n;i++){
        if(s.find(a[i])==s.end())
            return false;
    }
    return true;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>b[i];
	    cout<<check(a,b,n)<<endl;     
	}
	return 0;
}
