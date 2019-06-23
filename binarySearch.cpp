#include<bits/stdc++.h>
using namespace std;


int biSearch(int *a,int l,int r,int x){
    if(r>=l){
        int m=l+(r-l)/2;
        if(a[m]==x)
            return 1;
        else if(x<a[m])
            return biSearch(a,l,(m-1),x);
        else if(x>a[m])
            return biSearch(a,(m+1),r,x);
    }
    return (-1);
}


/*
int biSearch(int *a,int n,int x){
    int l=0,r=(n-1);
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x)
            return 1;
        else if(x<a[m])
            r=m-1;
        else if(x>a[m])
            l=m+1;
    }
    return (-1);
}

*/

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
	    //cout<<biSearch(a,n,x)<<endl;     
	    cout<<biSearch(a,0,n-1,x)<<endl;     
	}
	return 0;
}
