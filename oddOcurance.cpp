#include<bits/stdc++.h>
using namespace std;


//using bit magic
int odd(int *a,int n){
    int x=0;
    for(int i=0;i<n;i++){
        x=x^a[i];
    }
    return x;
}

//using hasing
int odd(int *a,int n){
    unordered_multiset<int>s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    for(int i=0;i<n;i++){
        if(s.count(a[i])%2==1)
            return a[i];
    }        
    return 0;        
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
	    cout<<odd(a,n)<<endl;     
	}
	return 0;
}
