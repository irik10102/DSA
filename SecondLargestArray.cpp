int maxProduct(vector<int>& arr) 
{
  int max = arr[0];
  int sMax=0;
  int n=arr.size();
  for(int i=1;i<n;i++)
  {
    if(max<arr[i])
    {
      sMax=max;
      max=arr[i];
    }
    else
      if(sMax<arr[i])
        sMax=arr[i];
  }
  return max*sMax;
}
