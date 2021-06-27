class Solution{
  string longestcommonprefix(vector<string>&strs){
        int i,j;
    
    //Length of vector 
        int n=strs.size();
    //If Vector size is 0 
        if(n==0){
          return "";
        }
    
    //Taking First Element of Vector in result 
        string result=strs[0];
    
    //Looping Through the next element and finding the element matched and finding the substring which is matched.....
        for(int i=1;i<strs.size();i++){
          //Finding the Element of result in other string till its size  is not zero
              while(strs[i].find(result)!=0){
                //Finding the matched substr to the size of result -1
                    result=result.substr(0,result.size()-1);
                                         
              }
        }
     return result;
  }
};

/************OUTPUT******************
Input: strs = ["flower","flow","flight"]
Output: "fl"

Input: strs = ["dog","racecar","car"]
Output: ""*/
