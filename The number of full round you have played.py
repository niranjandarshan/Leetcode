class Solution:
    def numberOfRounds(self, startTime: str, finishTime: str) -> int:
        def convert(time):
            hh,mm=time.split(":")
            return int(hh)*60+int(mm)
        start=convert(startTime)
        end=convert(finishTime)
        if start>end:
            end+=24*60
        start=(start+14)//15
        end=end//15
        
        if(end-start>=0):
            return end-start
        if(end-start==-1):
            return 0
        
              
              
   #/////////////Output//////////////////
              
   #Input: startTime = "12:01", finishTime = "12:44"
#Output: 1

#Input: startTime = "20:00", finishTime = "06:00"
#Output: 40
#*/
