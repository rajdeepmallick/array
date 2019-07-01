#include<bits/stdc++.h>
using namespace std;

void missRep(int *a,int n){
    /*
    unordered_set<int>s;
    int dup,miss,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(s.find(a[i])==s.end())
            s.insert(a[i]);
        else{
            dup=a[i];
        }
    }
    cout<<dup<<" ";
    cout<<((n*(n+1)/2)-(sum-dup))<<endl;
    */
    for(int i=0;i<n;i++){
        if(a[abs(a[i])-1]>0)
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        else
            cout<<abs(a[i])<<" ";
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<(i+1)<<endl;
            break;
        }
    }
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
	    missRep(a,n);     
	}
	return 0;
}
