/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int Soulution::solve(vector<int> &A,int B) {
    sort(A.begin(),A.end());
    int start=0, end=1, n=A.size();
    
    while(end<n){
        if(A[end]-A[start]==b)
        return 1;
        
        else if(A[end]-A[start]<B)
        end++
        
        else
        start++;
    }
    return 0;
}
