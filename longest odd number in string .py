class Solution:
    def largestOddNumber(self, num: str) -> str:
        for i in range(len(num) - 1, -1, -1):            
            c = num[i]
            
            if int(c) % 2 != 0:
                return num[:i + 1]
        
        return ""
      
     # //////////////Output///////////// 
      #Input: num = "52"
      #Output: "5"
