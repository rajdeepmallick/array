#include<bits/stdc++.h>
using namespace std;

void removeDup(int *a,int n){
    unordered_set<int>s;
    
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    
    for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end()){
            cout<<a[i]<<" ";
            s.erase(a[i]);
        }    
    }
    cout<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    removeDup(a,n);     
	}
	return 0;
}
