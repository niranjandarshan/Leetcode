class Solution{
public:
  int LongestSubstringWithoutRepetition(string s){
      int n= s.size();
    int length=0;
    for(int i=0;i<n;i++){
      vector<bool>arr(256);
      for(int j=i;j<n;j++){
        if(arr[s[j]]==true){
          break;
        }
        else{
            result=max(result,j-i+1);
          arr[s[j]]=true;
        }
      }
      arr[s[i]]=false;
    }
    return result
  }
}
