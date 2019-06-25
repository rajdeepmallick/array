#include<bits/stdc++.h>
using namespace std;

void findPair(int *a,int *b,int n,int m,int x){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(b[i]);
    }
    bool f=false,f1=false;
    for(int i=0;i<n;i++){
        if(s.find(x-a[i])!=s.end()){
            if(f==true)
                cout<<", ";
            cout<<a[i]<<" "<<(x-a[i]);
            f=true;
            f1=true;
        }
    }
    if(f1==false)
        cout<<-1;
    cout<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m>>x;
	    int a[n],b[m];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<m;i++)
	        cin>>b[i];
	    findPair(a,b,n,m,x);      
	}
	return 0;
}
