class solution{
public:
    void sort012(int a[], int n)
    {
    int i=0,j=0,k=n-1;
      while(j<=k){
        if(a[j]==0){
            swap(a[i],a[j]);
            i++;
            j++;
        }
        else if(a[j]==1){
            j++;
        }
        else{
            swap(a[j],a[k]);
            k--;
        }
    }
 
 }
