/*This is a function problem.You only need to complete the function given below*/
/*You need to complete this function */





//my code
int bin_search(int A[], int left, int right, int k){
    while(left<=right){
        int mid=left+(right-left)/2;
        if(A[mid]==k)
            return mid;
        else if(A[mid]>k)
            right=mid-1;
        else if(A[mid]<k)
            left=mid+1;
    }
    return (-1);
}
