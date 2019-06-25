#include<bits/stdc++.h>
using namespace std;

string check(int *a,int *b,int n1,int n2){
    unordered_set<int>s;
    for(int i=0;i<n1;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        if(s.find(b[i])==s.end())
            return "No";
    }
    return "Yes";
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n1,n2;
	    cin>>n1>>n2;
	    int a[n1],b[n2];
	    for(int i=0;i<n1;i++)
	        cin>>a[i];
	    for(int i=0;i<n2;i++)
	        cin>>b[i];
	    cout<<check(a,b,n1,n2)<<endl;     
	}
	return 0;
}
