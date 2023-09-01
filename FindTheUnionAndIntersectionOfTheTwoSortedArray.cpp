class solution{
public:

int doUnion(int a[],int n,int b[],int m){

  set<long long> s;
  for(int i=0;i<n;i++){
      s.insert(a[i]);
  }
  for(int j=0;j<n;j++){
      s.insert(b[j);
  }

  return s.size();
}
