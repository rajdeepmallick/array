#include<bits/stdc++.h>
using namespace std;

long long fine(int *c,int *f,int n,int d){
    long long total=0;
    for(int i=0;i<n;i++){
        if(d%2==0 && c[i]%2==1){
            total=total+f[i];
        }
        else if(d%2==1 && c[i]%2==0){
            total=total+f[i];
        }
    }
    return total;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int c[n],f[n];
	    for(int i=0;i<n;i++)
	        cin>>c[i];
	    for(int i=0;i<n;i++)
	        cin>>f[i];     
	    cout<<fine(c,f,n,d)<<endl;     
	}
	return 0;
}
